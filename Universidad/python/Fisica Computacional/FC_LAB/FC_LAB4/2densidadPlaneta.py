import numpy as np
def main():
    m = float(input("Ingrese el masa del planeta (kg): "))
    #m = 5.9724e24
    r = float(input("Ingrese el radio del planeta (m): "))
    #r = 6.371e6
    v = (4/3)*np.pi*pow(r,3)
    d = m / v
    print("La densidad del planeta es: " + str(d) + " kg/m3")
   
main()