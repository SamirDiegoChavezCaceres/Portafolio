
package com.assignment.bank;

import java.rmi.registry.Registry;
 
public class Main_Driver {
    
    static final Integer IN_SML = 4;
    static final Integer IN_MED = 6;
    static final Integer IN_LRG = 8;
    static final Integer NEW_TRY = 3;
    static Registry bank_reg;
    static BankInterface bank_pros;
    static Numpad_Panel new_num;
    static Option_Panel new_opt;
    static Integer acc_num;
    static Integer pay_num;
    static Integer tries;
    static String opt;
    static String pay;
    static String date_srt;
    static String date_end;
    static String acc_bank;
    static Integer depo_num;
    static Boolean depo_third = false;
    
    static void fun_acc_num()
    {
        opt = "acc_ck";
        Numpad_Panel.in_size = IN_MED;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"><html> INGRESE EL NÚMERO DE CUENTA <br><br>";
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    static void fun_acc_pin()
    {
        opt = "pin_ck";
        tries = NEW_TRY;
        Numpad_Panel.in_size = IN_SML;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"><html> INTRODUZCA EL PIN DE LA CUENTA <br><br>INTENTOS RESTANTES : "+tries +"<br><br>";
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    /* Aca se crearia a fun_depo_sel() que hara algo parecido a fun_pay_sel()
        trendremos que elegir entre deposito a cuenta propia o a terceros.
    */
    static void fun_depo_sel()
    {
        opt = "depo_sel";
        Option_Panel.opt_disp = "<html><p style=\"text-align:center;\"> SELECCIONE  ";
        new_opt = new Option_Panel();
        new_opt.setVisible(true);
        
        
    }
    /*
       Aca se crearia a fun_depo_num() que hara algo parecido a fun_pay_num()
        para ingresar el numero de cuenta a depositar en caso escojamos a terceros
    */
    
    static void fun_depo_num()
    {
        /* trabajaria igual a fun_pay_num() */
        Numpad_Panel.in_size = IN_LRG;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"> INGRESA NÚMERO DE CUENTA <br><br>";
        Numpad_Panel.in.clear();
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
        
        
    }
    
    static void fun_depo_amt()
    {
        opt = "depo";
        Numpad_Panel.in_size = IN_MED;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"> INGRESE EL MONTO DEL DEPÓSITO <br><br> S/. ";
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    static void fun_with()
    {
        opt = "with";
        Numpad_Panel.in_size = IN_MED;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"> INGRESE LA CANTIDAD DE RETIRO <br><br> S/. ";
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    static void fun_pay_sel()
    {
        opt = "pay_acc";
        Option_Panel.opt_disp = "<html><p style=\"text-align:center;\"> SELECCIONE EL PROVEEDOR DE PAGO ";
        new_opt = new Option_Panel();
        new_opt.setVisible(true);
    }
    
    static void fun_pay_num()
    {
        Numpad_Panel.in_size = IN_LRG;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"> INGRESA "+pay +"NÚMERO DE CUENTA <br><br>";
        Numpad_Panel.in.clear();
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    static void fun_pay_amt()
    {
        opt = "pay";
        Numpad_Panel.in_size = IN_MED;
        Numpad_Panel.in_disp = "<html><p style=\"text-align:center;\"> INGRESE EL IMPORTE DEL PAGO <br><br> S/. ";
        new_num = new Numpad_Panel();
        Numpad_Panel.in.clear();
        new_num.setVisible(true);
        new_num.input();
    }
    
    static void fun_trans()
    {
        opt = "trans";
        new Record_Panel().setVisible(true);
    }
     
    public static void main(String[] args) {
        Main_Driver main = new Main_Driver();
        new Home_Panel().setVisible(true);
    }
}
