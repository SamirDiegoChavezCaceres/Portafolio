
def main():
    option = 0
    while (option == 0):
        print("Presione 1 si desea hacer una operacion de MRU")
        print("Presione 2 si desea hacer una operacion de MRUV")
        option = float(input())
    if (option == 1):
        option = 0
        while (option == 0):
            print("Presione 1 si desea hallar distancia")
            print("Presione 2 si desea hallar velocidad")
            print("Presione 3 si desea hallar tiempo")
            option = float(input())
        if (option == 1):
            print("Ingrese velocidad")
            v = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La distancia es: " + str(v * t))
        elif (option == 2):
            print("Ingrese distancia")
            x = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La velocidad es: " + str(x / t))
        elif (option == 3):
            print("Ingrese velocidad")
            v = float(input())
            print("Ingrese distancia")
            x = float(input())
            print("El tiempo es: " + str(x / v))
    else:
        option = 0
        while (option == 0):
            print("Presione 1 si desea hallar velocidad inicial")
            print("Presione 2 si desea hallar velocidad final")
            print("Presione 3 si desea hallar distancia")
            print("Presione 4 si desea hallar aceleracion")
            print("Presione 5 si desea hallar tiempo")
            option = float(input())
        if (option == 1):
            print("Ingrese velocidad final")
            vf = float(input())
            print("Ingrese aceleracion (negativo si esta desacelerando)")
            a = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La velocidad inicial es: " + str(vf - a * t))
        elif (option == 2):
            print("Ingrese velocidad inicial")
            vi = float(input())
            print("Ingrese aceleracion (negativo si esta desacelerando)")
            a = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La velocidad final es: " + str(vi + a * t))
        elif (option == 3):
            print("Ingrese velocidad inicial")
            vi = float(input())
            print("Ingrese velocidad final")
            vf = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La distancia es: " + str(((vi + vf) / 2) * t))
        elif (option == 4):
            print("Ingrese velocidad inicial")
            vi = float(input())
            print("Ingrese velocidad final")
            vf = float(input())
            print("Ingrese tiempo")
            t = float(input())
            print("La aceleracion es: " + str((vf - vi) / t))
        elif (option == 5):
            print("Ingrese velocidad inicial")
            vi = float(input())
            print("Ingrese velocidad final")
            vf = float(input())
            print("Ingrese aceleracion")
            a = float(input())
            print("El tiempo es: " + str((vf - vi) / a))

main()
