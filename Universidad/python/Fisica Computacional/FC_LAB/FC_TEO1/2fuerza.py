import math
def main():
    gravedad = 9.8
    m = float(input("Ingrese masa (kg): "))
    angulo = int(input("Ingrese angulo (grados): "))
    #El problema no especifica si se debe considerar
    #la friccion con el hielo, por lo que se asume que no
    #se considera
    aceleracion = gravedad * math.sin(math.radians(angulo))
    #se descompone la fuerza gravitacional en sus componentes
    # y se considera la paralela para el calculo de la aceleracion
    fuerza = m * aceleracion

    #si se considerara la friccion seria
    fuerzaR = fuerza - (0.02 * m * gravedad * math.cos(math.radians(angulo)))
    print("La fuerza es: " + str(fuerza) + " N")
    print("Considerando friccion: " + str(fuerzaR) + " N")
main()