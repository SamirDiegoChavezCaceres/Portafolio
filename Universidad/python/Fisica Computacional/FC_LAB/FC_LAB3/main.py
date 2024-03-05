import MAS
import MovForzado
import LC
import LCR

def main():
    opcion = input("Ingrese '1' para MAS, '2' para MAS forzado, '3' para LC, '4' para LCR")
    if(opcion == '1'):
        MAS.MAS()
    elif(opcion == '2'):
        MovForzado.forzado()
    elif(opcion == '3'):
        LC.LC()
    elif(opcion == '4'):
        LCR.LCR()
    else:
        print("Opcion invalida")

main()