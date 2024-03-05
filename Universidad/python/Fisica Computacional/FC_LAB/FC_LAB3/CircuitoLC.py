import math
import numpy as np
import matplotlib.pyplot as plt

# Ecuación 6
def calculate_charge(Q0, L, C, t, phi):
    omega = 1 / math.sqrt(L * C)
    return Q0 * np.sin(omega * t + phi)

# Ecuación 8
def calculate_damped_charge(Q0, R, L, C, t, phi):
    omega_0 = 1 / math.sqrt(L * C)
    gamma = R / (2 * L)
    omega = np.sqrt(omega_0**2 - gamma**2)
    return Q0 * np.exp(-gamma * t) * np.sin(omega * t + phi)

# Gráfico para la ecuación 6
def plot_equation6(Q0, L, C, phi):
    t = np.linspace(0, 10, 100)  # Intervalo de tiempo
    charge = calculate_charge(Q0, L, C, t, phi)

    plt.plot(t, charge)
    plt.xlabel('Tiempo')
    plt.ylabel('Carga')
    plt.title('Gráfico de la Ecuación 6')
    plt.grid(True)
    plt.show()

# Gráfico para la ecuación 8
def plot_equation8(Q0, R, L, C, phi):
    t = np.linspace(0, 10, 100)  # Intervalo de tiempo
    charge = calculate_damped_charge(Q0, R, L, C, t, phi)

    plt.plot(t, charge)
    plt.xlabel('Tiempo')
    plt.ylabel('Carga')
    plt.title('Gráfico de la Ecuación 8')
    plt.grid(True)
    plt.show()

# Ejemplo de uso
Q0 = 3
L = 0.5
C = 0.2
phi = 0 

plot_equation6(Q0, L, C, phi)

R = 1
plot_equation8(Q0, R, L, C, phi)
