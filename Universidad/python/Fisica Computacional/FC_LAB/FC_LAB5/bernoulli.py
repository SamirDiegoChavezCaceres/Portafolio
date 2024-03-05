
def bernuli():
    print("""La ecuacion de bernulli nos muestra que en 
            un escenario ideal, la presion no se pierde, solo se transforma.
            Tal como la ley de la conservacion de energia, solo que en
            este caso la presion se transforma en presion dinamica(velocidad) 
            e hidrostatica(altura)
            """)
    print("""Por lo que podriamos decir que en un punto 1, la suma de presiones 
            sera igual a un punto 2 donde hay una presion absoluta P2""")
    print("""El siguiente codigo, se encarga de hallar esta segunda presion P2,
            para ello usted debera ingresar los datos para hallar, la presion
            estatica, dinamica e hidrostatica.""")        

    p = float(input("Ingrese la presion estatica P1(Pascal): "))

    print("""Para hallar la presion hidrostatica necesitamos...""")        
    rho = float(input("Ingrese la densidad rho(kg/m3) : "))
    print("""La gravedad es 9.8...""")        
    g = 9.8
    h = float(input("Ingrese la altura del tubo respecto al punto de referencia(m): "))

    print("""Para hallar la presion dinamica necesitamos...""")     
    print("""rho(kg/m3):  """ + rho)     
    v = float(input("Ingrese la velocidad del fluido(m/s): "))

    p2 = bernuliSolution(p, rho, g, h, v)

    print("""La presion absoluta, y por ende en el punto 2 es: """ + p2 + " pascales")     

def bernuliSolution(p, rho, g, h, v):
    p2 = p + rho * g * h + (rho * (v**2))/2
    return p2