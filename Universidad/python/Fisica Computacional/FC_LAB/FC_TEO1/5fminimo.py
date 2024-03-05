import math
def main():
    masa = float(input("Ingrese masa (m): "))
    u = float(input("Ingrese coeficiente de friccion: "))
    angulo = float(input("Ingrese angulo (grados): "))
    g = 9.8

    P = masa * g * u / (math.cos(math.radians(angulo)) - (u * math.sin(math.radians(angulo))))
    print("La fuerza minima P es: " + str(P) + " N")
main()