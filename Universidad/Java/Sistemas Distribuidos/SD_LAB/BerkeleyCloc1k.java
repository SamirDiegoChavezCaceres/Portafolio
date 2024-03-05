import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class BerkeleyClock {
    
    private static final int NUM_CLIENTS = 5;
    private static final int MAX_TIME_DIFFERENCE = 100000; // milliseconds
    
    public static void main(String[] args) throws InterruptedException {
        
        List<Client> clients = new ArrayList<>();
        
        // Create and start a thread for each client
        for (int i = 0; i < NUM_CLIENTS; i++) {
            Client client = new Client(i);
            client.start();
            clients.add(client);
        }
        
        // Wait for all client threads to finish
        for (Client client : clients) {
            client.join();
        }
        
        // Get the current time for each client
        long[] clientTimes = new long[NUM_CLIENTS];
        for (int i = 0; i < NUM_CLIENTS; i++) {
            clientTimes[i] = clients.get(i).getTime();
        }
        
        // Calculate the average time for all clients
        long averageTime = calculateAverage(clientTimes);
        
        // Calculate the time difference for each client
        long[] timeDifferences = calculateTimeDifferences(clientTimes, averageTime);
        
        // Calculate the new time for each client
        for (int i = 0; i < NUM_CLIENTS; i++) {
            long newTime = clientTimes[i] + timeDifferences[i];
            System.out.println("Client " + i + "new time: " + new Date(newTime));
        }
    }
    
    private static long calculateAverage(long[] clientTimes) {
        long sum = 0;
        for (long clientTime : clientTimes) {
            sum += clientTime;
        }
        return sum / clientTimes.length;
    }
    
    private static long[] calculateTimeDifferences(long[] clientTimes, long averageTime) {
        long[] timeDifferences = new long[NUM_CLIENTS];
        for (int i = 0; i < NUM_CLIENTS; i++) {
            long timeDifference = averageTime - clientTimes[i];
            // Limit the time difference to the maximum allowed difference
            timeDifferences[i] = Math.min(Math.max(timeDifference, -MAX_TIME_DIFFERENCE), MAX_TIME_DIFFERENCE);
        }
        return timeDifferences;
    }
    
    // A client thread that retrieves its local time and stores it in a variable
    private static class Client extends Thread {
        
        private final int id;
        private long time;
        
        public Client(int id) {
            this.id = id;
        }
        
        @Override
        public void run() {
            // Simulate network latency by sleeping for a random amount of time
            try {
                Thread.sleep((long) (Math.random() * 100000));
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
            // Store the local time
            time = System.currentTimeMillis();
            System.out.println("store Client " + id + " time: " + new Date(time));
        }
        
        public long getTime() {
            return time;
        }
    }
    
}
