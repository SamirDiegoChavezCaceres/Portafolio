import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BerkeleyClock {
    
    private List<Long> clientClocks;
    private long averageClock;
    
    public BerkeleyClock() {
        clientClocks = new ArrayList<>();
        clientClocks.add(1000000000L); // añadir el reloj del servidor
    }
    
    public void addClientClock(long clock) {
        clientClocks.add(clock);
    }

    public List<Long> getClientClocks() {
        return clientClocks;
    }
    
    public void synchronizeClocks() {
        long sum = 0;
        for (Long clock : clientClocks) {
            sum += clock;
        }
        long avg = sum / clientClocks.size();
        averageClock = avg;
        
        List<Long> timeDifferences = new ArrayList<>();
        for (Long clock : clientClocks) {
            timeDifferences.add(avg - clock);
        }
        
        long adjustedAvg = avg - (Collections.max(timeDifferences) / 2);
        for (int i = 1; i < clientClocks.size(); i++) {
            long adjustedClock = clientClocks.get(i) + (adjustedAvg - avg);
            clientClocks.set(i, adjustedClock);
        }
    }
    
    public long getAverageClock() {
        return averageClock;
    }
    public static void main(String[] args) {
        BerkeleyClock clock = new BerkeleyClock();
        clock.addClientClock(1500000000L); // tiempo del primer cliente
        clock.addClientClock(1600000000L); // tiempo del segundo cliente
        clock.addClientClock(1700000000L); // tiempo del tercer cliente
        
        clock.synchronizeClocks();
        
        System.out.println("Tiempo promedio: " + clock.getAverageClock());
        System.out.println("Relojes de los clientes ajustados: " + clock.getClientClocks());
    }
    
}
