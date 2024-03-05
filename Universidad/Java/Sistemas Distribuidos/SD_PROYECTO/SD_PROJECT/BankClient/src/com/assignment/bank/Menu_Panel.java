/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.assignment.bank;

import java.rmi.AccessException;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Vj
 */
public class Menu_Panel extends javax.swing.JFrame {

    /**
     * Creates new form Option_Panel
     */
    
    static String menu_disp;
    static String acc_bal;
    static String banks_info;
    
    void get_bal()
    {
        try
        {
            try 
            {
                Main_Process.pros_connect();
            } 
            catch (AccessException | NotBoundException ex) 
            {
                Logger.getLogger(Main_Driver.class.getName()).log(Level.SEVERE, null, ex);
            }
            acc_bal = "<html><p style=\"text-align:center;\"> SALDO DISPONIBLE <br> S/. "+Main_Driver.bank_pros.checkBalance(Main_Driver.acc_num);
                                   
        }
        catch (RemoteException e)
        {
        }
    }
    
    void get_banks_info()
    {
        banks_info = "<br><p style=\"text-align:center;\"> SE ENCUENTRA EN EL<br>SISTEMA DEL BANCO: "+Main_Driver.acc_bank;
    }
    
    public Menu_Panel() {
        initComponents();
        get_bal();
        get_banks_info();
        info_panel.setText(menu_disp+acc_bal+banks_info);
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        info_panel = new javax.swing.JLabel();
        cancel_btn = new javax.swing.JButton();
        trans_btn = new javax.swing.JButton();
        pay_btn = new javax.swing.JButton();
        with_btn = new javax.swing.JButton();
        depo_btn = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setMinimumSize(new java.awt.Dimension(480, 640));
        setResizable(false);

        info_panel.setFont(new java.awt.Font("Segoe UI", 1, 24)); // NOI18N
        info_panel.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        info_panel.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/opt_panel.png"))); // NOI18N
        info_panel.setBorder(new javax.swing.border.LineBorder(new java.awt.Color(0, 0, 0), 1, true));
        info_panel.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);

        cancel_btn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        cancel_btn.setForeground(new java.awt.Color(255, 255, 255));
        cancel_btn.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/lrg_btn.png"))); // NOI18N
        cancel_btn.setText("CANCELAR");
        cancel_btn.setContentAreaFilled(false);
        cancel_btn.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        cancel_btn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cancel_btnActionPerformed(evt);
            }
        });

        trans_btn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        trans_btn.setForeground(new java.awt.Color(255, 255, 255));
        trans_btn.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/lrg_btn.png"))); // NOI18N
        trans_btn.setText("HISTORIAL DE TRANSACCIÓN");
        trans_btn.setContentAreaFilled(false);
        trans_btn.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        trans_btn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                trans_btnActionPerformed(evt);
            }
        });

        pay_btn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        pay_btn.setForeground(new java.awt.Color(255, 255, 255));
        pay_btn.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/lrg_btn.png"))); // NOI18N
        pay_btn.setText("REALIZAR PAGOS");
        pay_btn.setContentAreaFilled(false);
        pay_btn.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        pay_btn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                pay_btnActionPerformed(evt);
            }
        });

        with_btn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        with_btn.setForeground(new java.awt.Color(255, 255, 255));
        with_btn.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/lrg_btn.png"))); // NOI18N
        with_btn.setText("RETIRAR FONDO");
        with_btn.setContentAreaFilled(false);
        with_btn.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        with_btn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                with_btnActionPerformed(evt);
            }
        });

        depo_btn.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        depo_btn.setForeground(new java.awt.Color(255, 255, 255));
        depo_btn.setIcon(new javax.swing.ImageIcon(getClass().getResource("/com/assignment/bank/images/lrg_btn.png"))); // NOI18N
        depo_btn.setText("DEPOSITAR FONDO");
        depo_btn.setContentAreaFilled(false);
        depo_btn.setHorizontalTextPosition(javax.swing.SwingConstants.CENTER);
        depo_btn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                depo_btnActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(52, 52, 52)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(info_panel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(trans_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addComponent(pay_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addComponent(with_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
                    .addComponent(depo_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 378, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(cancel_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                .addContainerGap(50, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(24, 24, 24)
                .addComponent(info_panel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGap(18, 18, 18)
                .addComponent(depo_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(with_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(pay_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(trans_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(cancel_btn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(24, 24, 24))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void depo_btnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_depo_btnActionPerformed
        /* aca se llamaria a un tipo fun_depo_sel() ya no a fun_depo */
        Main_Driver.fun_depo_sel();
        this.setVisible(false);
    }//GEN-LAST:event_depo_btnActionPerformed

    private void with_btnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_with_btnActionPerformed
        Main_Driver.fun_with();
        this.setVisible(false);
    }//GEN-LAST:event_with_btnActionPerformed

    private void cancel_btnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cancel_btnActionPerformed
        new Home_Panel().setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_cancel_btnActionPerformed

    private void pay_btnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_pay_btnActionPerformed

        Main_Driver.fun_pay_sel();
        this.setVisible(false);
    }//GEN-LAST:event_pay_btnActionPerformed

    private void trans_btnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_trans_btnActionPerformed
        Main_Driver.fun_trans();
        this.setVisible(false);
    }//GEN-LAST:event_trans_btnActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Menu_Panel.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Menu_Panel.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Menu_Panel.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Menu_Panel.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(() -> {
            new Menu_Panel().setVisible(true);
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton cancel_btn;
    private javax.swing.JButton depo_btn;
    private javax.swing.JLabel info_panel;
    private javax.swing.JButton pay_btn;
    private javax.swing.JButton trans_btn;
    private javax.swing.JButton with_btn;
    // End of variables declaration//GEN-END:variables
}
