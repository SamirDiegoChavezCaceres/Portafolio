
package com.assignment.bank;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.security.*;
 
public class MainC extends Policy{
     
    private void startServer(){ 
        try {
            Registry registry = LocateRegistry.createRegistry(1097);
            registry.rebind("BankC", new BankImpl("C"));
            System.out.println("system C is ready");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
     
    public static void main(String[] args) throws RemoteException {
        MainC main = new MainC();
        System.setProperty("java.rmi.server.hostname","127.0.0.3");// sets the RMI service to start on local host
        main.startServer();
    }
}
