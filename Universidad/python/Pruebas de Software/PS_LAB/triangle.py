def triangle_type(a = None, b = None, c = None):
    if a == None or b == None or c == None:
        return "invalido, faltan argumentos"
    if a <= 0 or b <= 0 or c <= 0:
        return "invalido"
    elif a + b <= c or a + c <= b or b + c <= a:
        return "invalido"
    elif a == b == c:
        return "equilatero" 
    elif a == b or a == c or b == c:
        return "isosceles"
    else:
        return "escaleno"

print("1."+str(triangle_type(1,2,3)=="invalido"))
print("1."+str(triangle_type(2,3,4)=="escaleno"))

print("2."+str(triangle_type(2,2,2)=="equilatero"))

print("3."+str(triangle_type(2,2,3)=="isosceles"))
print("3."+str(triangle_type(2,2,4)=="invalido"))

print("4."+str(triangle_type(4,3,3)=="isosceles"))
print("4."+str(triangle_type(3,4,3)=="isosceles"))
print("4."+str(triangle_type(3,3,4)=="isosceles"))

print("5."+str(triangle_type(0,1,2)=="invalido"))

print("6."+str(triangle_type(1,3,-2)=="invalido"))

print("7."+str(triangle_type(1,2,3)=="invalido"))

print("8."+str(triangle_type(1,2,3)=="invalido"))
print("8."+str(triangle_type(2,3,1)=="invalido"))
print("8."+str(triangle_type(3,2,1)=="invalido"))

print("9."+str(triangle_type(1,2,4)=="invalido"))
print("9."+str(triangle_type(1,4,2)=="invalido"))

print("10."+str(triangle_type(1,2,4)=="invalido"))
print("10."+str(triangle_type(1,4,2)=="invalido"))
print("10."+str(triangle_type(4,1,2)=="invalido"))

print("11."+str(triangle_type(0,0,0)=="invalido"))

print("12."+str(triangle_type(3.5,1.5,5.5)=="invalido"))
print("12."+str(triangle_type(1,3.1,4)=="escaleno"))
print("12."+str(triangle_type(2.5,3.5,5.5)=="escaleno"))

print("13."+str(triangle_type(2,3)=="invalido, faltan argumentos"))