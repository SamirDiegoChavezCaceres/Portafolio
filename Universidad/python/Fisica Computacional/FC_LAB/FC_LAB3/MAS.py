import math
import numpy as np 
import matplotlib.pyplot as plt

def MAS(A = None, w = None, t0 = None, tf = None, phi = None, m = None, k = None):
    if(A == None):
        A = float(input("Ingrese amplitud (m)"))
    if(t0 == None):
        t0 = float(input("Ingrese tiempo inicial (s)"))
    if(tf == None):
        tf = float(input("Ingrese tiempo final (s)"))
    if(w == None and m == None and k == None):
        opcion = input("Ingrese opcion: 1) trabaja con velocidad angular 2) trabaja con masa y constante elastica")
        if(opcion == "1"):
            w = float(input("Ingrese velocidad angular"))
            opcion = input("ingrese 'r' para radianes o 'g' para grados")
            if(opcion == 'g'):
                w = np.radians(w)
    if(m == None and w == None):
        m = float(input("Ingrese masa (kg)"))
    if(k == None and w == None):
        k = float(input("Ingrese constante elastica (N/m)"))
    if(w == None):
        w = np.sqrt(k/m)
    if(phi == None):
        phi = float(input("Ingrese desfase"))
        opcion = input("ingrese 'r' para radianes o 'g' para grados")
        if(opcion == 'g'):
            phi = np.radians(phi)
  
    t_ = np.linspace(t0,tf,1000)
    x_ = A*np.cos(w*t_ + phi)
    v_ = -A*w*np.sin(w*t_ + phi)
    a_ = A*pow(w,2)*np.cos(w*t_ + phi)

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

#MAS(A = 1, m = 2, k = 1, t0 = 0, tf = 30, phi = 0)