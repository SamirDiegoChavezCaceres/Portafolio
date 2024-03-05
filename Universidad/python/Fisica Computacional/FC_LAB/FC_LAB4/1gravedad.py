def main():
    m = float(input("Ingrese el masa del planeta (kg): "))
    #m = 5.9724e24
    r = float(input("Ingrese el radio del planeta (m): "))
    #r = 6.371e6
    G = 6.673*pow(10,-11)
    g = (G * m) / pow(r,2)

    print("La gravedad es: "+ str(g) + " m/s2")
main()
