def main():
    m = input("Ingrese la masa del planeta (kg): ")
    #m = 5.9724e24
    v = input("Ingrese la velocidad orbital del planeta (m/s): ")
    #v = 29800
    d = input("Ingrese la distancia entre el planeta y el sol (m): ")
    #d = 150000000000
    t = input("Ingrese el tiempo de barrido (m): ")

    L = m * v * d
    a = (L/ (2 * m)) * t
   
    print("El area que barre el planeta en " + str(t) + " segundos es: " + a + " m2")
main()