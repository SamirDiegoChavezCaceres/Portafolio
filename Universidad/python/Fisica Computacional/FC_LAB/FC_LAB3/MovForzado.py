import math
import numpy as np 
import matplotlib.pyplot as plt

def forzado(A = None, w = None, w0 = None, t0 = None, tf = None, phi = None, f0 = None, m = None, b = None):
    #b = parametro de amortiguamiento
    #m = masa
    #f0 = fuerza inicial
    if(t0 == None):
        t0 = float(input("Ingrese tiempo inicial (s)"))
    if(tf == None):
        tf = float(input("Ingrese tiempo final (s)"))
    if(phi == None):
        f0 = float(input("Ingrese fuerza inicial (N)"))
    if(m == None):
        m = float(input("Ingrese masa (kg)"))
    if(b == None):
        b = float(input("Ingrese parametro de amortiguamiento (kg/s)"))
    if(w == None):
        w = float(input("Ingrese velocidad angular"))
        opcion = input("Ingrese opcion: 1) trabaja con radianes 2) trabaja con grados")
        if(opcion == "2"):
            w = np.radians(w)
    if(w0 == None):
        w0 = float(input("Ingrese velocidad angular natural"))
        opcion = input("Ingrese opcion: 1) trabaja con radianes 2) trabaja con grados")
        if(opcion == "2"):
            w0 = np.radians(w0)
    if(phi == None):
        phi = float(input("Ingrese desfase"))
        opcion = input("Ingrese opcion: 1) trabaja con radianes 2) trabaja con grados")
        if(opcion == "2"):
            phi = np.radians(phi)
        
    if(A == None):
        A = (f0 / (m * np.sqrt(pow((w**2 - w0**2),2)+pow((b*w/m),2))))

    t_ = np.linspace(t0,tf,1000)
    x_ = A*np.cos(w*t_ + phi)
    v_ = -A*w*np.sin(w*t_ + phi)
    a_ = -A*pow(w,2)*np.sin(w*t_ + phi)

    v_max = w*A
    a_max = pow(w,2)*A

    print("La velocidad maxima es: ", v_max, "m/s")
    print("La aceleracion maxima es: ", a_max, "m/s2")
    
    fig, axs = plt.subplots(2, 2)
    #position / time
    axs[0, 0].plot(t_, x_)
    axs[0, 0].set_title('posicion / tiempo')
    axs[0, 0].set(xlabel='tiempo (s)', ylabel='posicion (m)')
    #velocity / time
    axs[0, 1].plot(t_, v_)
    axs[0, 1].set_title('velocidad / tiempo')
    axs[0, 1].set(xlabel='tiempo (s)', ylabel='velocidad (m/s)')
    #aceletarion / time
    axs[1, 0].plot(t_, a_)
    axs[1, 0].set_title('aceleracion / tiempo')
    axs[1, 0].set(xlabel='tiempo (s)', ylabel='aceleracion (m/s2)')
    #velocity / position
    axs[1, 1].plot(x_, v_)
    axs[1, 1].set_title('velocidad / posicion')
    axs[1, 1].set(xlabel='posicion (m)', ylabel='velocidad (m/s)')

    fig.tight_layout()

    plt.show()

#forzado(w = 0.5 , w0 = 0.3, t0 = 0, tf = 100, phi = 0, f0 = 1, m = 1, b = 0.2)
#forzado(w = 100 , w0 = 120, t0 = 0, tf = 1.3*3.1415, phi = 0, f0 = 5, m = 5, b = 0)