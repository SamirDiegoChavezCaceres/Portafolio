
def Atwood(m1 = None, m2 = None):
    if(m1 == None or m2 == None):
        m1 = float((input("Ingrese la masa del cuerpo 1: ")))
        m2 = float((input("Ingrese la masa del cuerpo 2: ")))
    g = 9.8

    if(m1 > m2):
        direccion = 1
    else:
        direccion = -1

    aceleracion = direccion * (m1 - m2) * g / (m1 + m2)
    tension = (m1 + m2) * g / 2

    print("La magnitud de la aceleracion de los objetos es: ", round(aceleracion,2), "m/s^2")
    print("La tension en la cuerda sin peso es: ", round(tension, 2), "N")

Atwood(10,12)
Atwood()