def maquina_atwood(m1, m2):
    g = 9.8
    if(m1 > m2):
        direccion = 1
    elif(m1 < m2):
        direccion = -1

    aceleracion = direccion * (m1 - m2) * g / (m1 + m2)
    
    if(direccion == 1):
        tension = m1 * g - m1 * aceleracion
    elif(direccion == -1):
        tension = m2 * g - m2 * aceleracion

    return aceleracion, tension

m1 = 0.25  # Masa del objeto 1 en kg
m2 = 0.20  # Masa del objeto 2 en kg

aceleracion, tension = maquina_atwood(m1, m2)

print("Aceleración: {} m/s^2".format(aceleracion))
print("Tensión en la cuerda: {} N".format(tension))
