
import java.util.ArrayList;
import java.util.Scanner;
import java.util.HashMap;
import java.rmi.Naming;
import java.rmi.RemoteException;
import java.net.MalformedURLException;
import java.rmi.NotBoundException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class ClienteSide {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Registry reg = LocateRegistry.getRegistry("localhost", 1100);
        StockInterface pharm = (StockInterface) reg.lookup("PHARMACY");
        System.out.println("Ingresa la opcion\n" +

                "1: Listar productos\n" +
                "2: Comprar Producto\n");

        int selection = sc.nextInt();
        if (selection == 1) {
            HashMap<String, MedicineInterface> aux = (HashMap<String, MedicineInterface>) pharm.getStockProducts();
            for (String key : aux.keySet()) {
                MedicineInterface e = (MedicineInterface) aux.get(key);
                System.out.println(e.print());
                System.out.println("*--------------*");
            }
        } else if (selection == 2) {
            System.out.println("Ingrese nombre de la medicina");
            String medicine = sc.next();
            System.out.println("Ingrese cantidad a comprar");
            int amount = sc.nextInt();
            MedicineInterface aux = pharm.buyMedicine(medicine, amount);
            System.out.println("Usted acaba de comprar");
            System.out.println(aux.print());
        } else {
            System.out.println("Seleccione una opcion valida");
        }
        sc.close();
    }
}