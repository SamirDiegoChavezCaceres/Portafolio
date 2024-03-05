import math
def main():
    g = 9.8
    coef_friccion = float(input("Ingrese coeficiente de friccion: "))
    frecuencia = float(input("Ingrese frecuencia (s^-1): "))

    A = g * coef_friccion / (4 * (math.pi ** 2) * (frecuencia ** 2))
    print("La amplitud es: " + str(A) + " m")
main()