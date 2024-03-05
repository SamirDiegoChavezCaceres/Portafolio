import numpy as np
def main():
    r = float(input("Ingrese el semieje mayor de la elipse que describe el planeta (UA): "))
    #r = 1
    r = r * 1.496*pow(10,11)
    ks = 2.97 * pow(10,-19)
    t = np.sqrt(ks*pow(r,3))
    t = t / 86400
    print("El periodo orbital del planeta es: " + str(t) + " dias")
main()