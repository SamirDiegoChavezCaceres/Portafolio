import matplotlib.pyplot as plt
import math

def acceleration(m = None, vf = None, vi = None, d = None, t = None):
    if d is None:
        a = (vf - vi) / t
    elif vf is None:
        a = 2 * (d - vi*t) / t**2
    else:
        a = (vf**2 - vi**2) / (2 * d)
        t = (math.sqrt(2*d/a)) * math.sqrt(1 + (2*a*vi**2)/(2*d*a - vi**2))
        print("tiempo es: "+str(t)+ "s")
    f = m * a
    
    print("La fuerza que describe el móvil al momento de realizar el cambio de velocidad es: " + str(f) + " N")
    
    # Graficar proceso
    time = [0, t]
    velocity = [vi, vf]
    plt.plot(time, velocity)
    plt.xlabel("Tiempo (s)")
    plt.ylabel("Velocidad (m/s)")
    plt.title("Proceso de cambio de velocidad")
    plt.show()

acceleration(m=10, vi=0, vf=20, t=11.5)

