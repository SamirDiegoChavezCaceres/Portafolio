import java.rmi.AlreadyBoundException;
import java.rmi.Remote;
import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;
import java.rmi.*;

public class ServerSide {
    public static void main(String[] args) throws Exception {
        Stock pharmacy = new Stock();
        pharmacy.addMedicine("Paracetamol", 3.2f, 10);
        pharmacy.addMedicine("Mejoral", 2.0f, 20);
        pharmacy.addMedicine("Amoxilina", 1.0f, 30);
        pharmacy.addMedicine("Aspirina", 5.0f, 40);
        Registry reg = LocateRegistry.createRegistry(1100);
        reg.bind("PHARMACY", pharmacy);
        System.out.println("Server ready");
    }
}