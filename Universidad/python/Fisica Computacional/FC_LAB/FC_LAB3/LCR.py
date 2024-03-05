import math
import numpy as np 
import matplotlib.pyplot as plt

def LCR(q0 = None, omega = None, omega0 = None, gamma = None, t0 = None, tf = None, phi = None, L = None, C = None, R = None):
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
    if(R == None):
        R = float(input("Ingrese R"))
    if(L == None):
        L = float(input("Ingrese L"))
    if(C == None):
        C = float(input("Ingrese C"))

    gamma = R / (2*L)
    omega0 = 1 / math.sqrt(L * C)
    omega = math.sqrt(pow(omega0,2) - pow(gamma,2))
    

    t_ = np.linspace(t0,tf,1000)
    q = q0*np.exp(-gamma*t_)*np.sin(omega*t_ + phi)

    plt.figure(1)
    plt.plot(t_, q, label="carga")
    plt.xlabel("tiempo(s)")
    plt.ylabel("carga(C)")
    plt.title("carga / tiempo")
    plt.legend()
    plt.show()

#LCR(q0 = 3, t0 = 0, tf = 10, phi = 0, L = 0.5, C = 0.2, R = 1)