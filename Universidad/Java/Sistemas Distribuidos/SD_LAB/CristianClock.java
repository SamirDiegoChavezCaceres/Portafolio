import java.util.Date;

public class CristianClock {
    public static void main(String[] args) {
        // tiempo inicial del cliente
        long clientTime = System.currentTimeMillis();
        Date clientDate = new Date(clientTime);
        System.out.println("Hora del cliente: " + clientDate);
        
        // crear un thread para simular el tiempo del servidor
        Thread serverThread = new Thread(() -> {
            try {
                // esperar un tiempo aleatorio para simular el tiempo de procesamiento del servidor
                Thread.sleep((long) (Math.random() * 10000));
                
                // calcular la hora del servidor
                long serverTime = System.currentTimeMillis();
                Date serverDate = new Date(serverTime);
                System.out.println("Hora del servidor: " + serverDate);
                
                // ajustar la hora del cliente
                long adjustedTime = clientTime + (serverTime - clientTime) / 2;
                Date adjustedDate = new Date(adjustedTime);
                System.out.println("Hora ajustada del cliente: " + adjustedDate);
            } catch (InterruptedException e) {
                System.out.println("Error: " + e.getMessage());
            }
        });
        
        // ejecutar el thread del servidor
        serverThread.start();
    }
}


