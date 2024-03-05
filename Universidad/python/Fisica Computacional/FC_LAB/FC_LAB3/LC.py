import math
import numpy as np 
import matplotlib.pyplot as plt

def LC(q0 = None, omega = None, t0 = None, tf = None, phi = None, L = None, C = None):
    if(q0 == None):
        q0 = float(input("Ingrese q0"))
    if(t0 == None):
        t0 = float(input("Ingrese tiempo inicial (s)"))
    if(tf == None):
        tf = float(input("Ingrese tiempo final (s)"))
    if(phi == None):
        phi = float(input("Ingrese desfase"))
        opcion = input("ingrese 'r' para radianes o 'g' para grados")
        if(opcion == 'g'):
            phi = phi * (math.pi/180)
    if(omega == None and L == None and C == None):
        opcion = input("Ingrese opcion: 1) trabaja con omega 2) trabaja con inductancia y capacitancia")
        if(opcion == "1"):
            w = float(input("Ingrese omega"))
            opcion = input("ingrese 'r' para radianes o 'g' para grados")
            if(opcion == 'g'):
                w = np.radians(w)
    if(L == None and omega == None):
        L = float(input("Ingrese inductancia (H)"))
    if(C == None and omega == None):
        C = float(input("Ingrese capacitancia (F)"))
    if(omega == None):
        omega = 1 / np.sqrt(L*C)

    t_ = np.linspace(t0,tf,1000)
    q = q0*np.sin(omega*t_ + phi)

    plt.figure(1)
    plt.plot(t_, q, label="carga")
    plt.xlabel("tiempo(s)")
    plt.ylabel("carga(C)")
    plt.title("carga / tiempo")
    plt.legend()

    plt.show()

#LC(q0 = 3, t0 = 0, tf = 10, phi = 0, L = 0.5, C = 0.2)