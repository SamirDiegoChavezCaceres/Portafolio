package javaPS.PS_Lab;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class MinAndMax {
    public static void main(String[] args)  {
       // File doc = new File("C:\\Carpeta de Trabajo\\Repositorio Local\\javaPS\\PS_Lab\\test");
       // Scanner sc = new Scanner(doc);
       Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        if(1 <= t && t <= 5000){
            for(int i = 0; i < t; i++){
                int l1 = sc.nextInt();
                int r1 = sc.nextInt();
                int l2 = sc.nextInt();
                int r2 = sc.nextInt();
                System.out.println(minAndMaxMethod(l1, l2, r1, r2));
            }  
        }
    }
    public static int minAndMaxMethod(int l1, int l2, int r1, int r2) {
        if(1 <= l1 && l1 <= r1 && r1 <= 50 && 1 <= l2 && l2 <= r2 && r2 <= 50){
            int lmax = Math.max(l1, l2);
            int rmin = Math.min(r1, r2);
            if(lmax <= rmin)
                return lmax;
            else
                return l1+l2;
        }
        return 0;
    }
}