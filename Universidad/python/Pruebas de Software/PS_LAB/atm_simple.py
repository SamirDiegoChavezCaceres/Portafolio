# -*- coding: utf-8 -*-
"""
Created on Tue May  9 16:46:29 2023

@author: LAB02 
"""
import hashlib
import os

class Cajero:

    def __init__(self):

        self.pwd_hash = hashlib.sha256(b'5467').hexdigest()

        self.monto = 5000

        self.limite_diario = 3000

        self.total_deposits_diarios = 0

        self.total_retiros_diarios = 0

    def contraseña(self, password_attempt = None):

        
        if password_attempt != None:
            password_attempt_hash = hashlib.sha256(password_attempt.encode()).hexdigest()
            return password_attempt_hash == self.pwd_hash
        else:
            for i in range(3):

                password_attempt = input("Ingrese su contraseña: ")
                password_attempt_hash = hashlib.sha256(password_attempt.encode()).hexdigest()

                if password_attempt_hash == self.pwd_hash:

                    print("Contraseña correcta.")

                    return True

                else:

                    print(f"Contraseña incorrecta. Le quedan {2 - i} intentos.")

        print("No puede realizar operaciones.")

        return False

 

    def menu(self):

        os.system("cls")

        if not self.contraseña():

            return

        opcion = None

        while opcion != "4":


            print( """ Bienvenido al cajero automático.
            ******Menú******
            1- Depositar
            2- Retirar
            3- Ver saldo
            4- Salir """)

            opcion = input("Su opción es: ")

            if opcion == "1":
                self.depositar()

            elif opcion == "2":
                self.retirar()

            elif opcion == "3":
                self.ver()

            elif opcion == "4":
                print("Programa finalizado.")

            else:
                print("No existe esa opción.")
          

 

    def depositar(self, dep = None):

        if(dep == None):
            dep = int(input("Ingrese el monto a depositar: "))

        if self.total_deposits_diarios + dep > self.limite_diario:

            print("Operación rechazada. Excederia el límite diario de depósitos.")

        else:

            print(f"Usted ha depositado {dep}.")

            self.monto += dep

            self.total_deposits_diarios += dep

 

    def retirar(self, ret = None):

        if(ret == None):
            ret = int(input("Ingrese el monto a retirar: "))

        if ret > self.monto:

            print("Operación rechazada. Monto insuficiente.")

        elif self.total_retiros_diarios + ret > self.limite_diario:

            print("Operación rechazada. Excederia el límite diario de retiros.")

        else:

            print(f"Usted ha retirado {ret}.")

            self.monto -= ret

            self.total_retiros_diarios += ret

 

    def ver(self):

        print("Su saldo es: ", self.monto)
        return self.monto


