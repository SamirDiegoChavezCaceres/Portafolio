def main():
    option = 0
    while (option == 0):
        print("Presione 1 si desea hallar distancia")
        print("Presione 2 si desea hallar velocidad")
        print("Presione 3 si desea hallar tiempo")
        option = float(input())
    if (option == 1):
        print("Ingrese velocidad (m/s)")
        v = float(input())
        print("Ingrese tiempo (s)")
        t = float(input())
        print("La distancia es: " + str(v * t) + " m")
    elif (option == 2):
        print("Ingrese distancia (m)")
        x = float(input())
        print("Ingrese tiempo (t)")
        t = float(input())
        print("La velocidad es: " + str(x / t) + " m/s")
    elif (option == 3):
        print("Ingrese velocidad (m/s)")
        v = float(input())
        print("Ingrese distancia (m)")
        x = float(input())
        print("El tiempo es: " + str(x / v) + " s")
main()