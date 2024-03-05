
package com.assignment.bank;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.security.*;
 
public class MainB extends Policy{
     
    private void startServer(){ 
        try {
            Registry registry = LocateRegistry.createRegistry(1098);
            registry.rebind("BankB", new BankImpl("B"));
            System.out.println("system B is ready");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
     
    public static void main(String[] args) throws RemoteException {
        MainB main = new MainB();
        System.setProperty("java.rmi.server.hostname","127.0.0.2");// sets the RMI service to start on local host
        main.startServer();
    }
}
