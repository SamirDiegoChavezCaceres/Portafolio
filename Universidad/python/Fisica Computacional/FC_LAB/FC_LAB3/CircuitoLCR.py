import math
import numpy as np
import matplotlib.pyplot as plt

def oscillation_forced(t, F0, m, omega, omega0, b, phi):
    A = F0 / (m * np.sqrt((omega**2 - omega0**2)**2 + (b * omega / m)**2))
    return A * np.cos(omega * t + phi)

# Parámetros
F0 = 1
m = 1
omega = 0.5
omega0 = 0.3
b = 0.2
phi = 0

# Rango de tiempo
t = np.linspace(0, 10, 1000)

# Calcula los valores de x para cada valor de t
x = oscillation_forced(t, F0, m, omega, omega0, b, phi)

# Graficar la función
plt.plot(t, x)
plt.xlabel('Tiempo')
plt.ylabel('x(t)')
plt.title('Oscilación Forzada')
plt.grid(True)
plt.show()


