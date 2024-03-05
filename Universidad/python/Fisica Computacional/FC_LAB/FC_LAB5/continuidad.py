import numpy as np
import sympy as sp

sp.init_printing(use_latex="mathjax")
x,y,u = sp.symbols("x y u")
f = sp.Function("f")

u = f(x,y)
u_x = u.diff(x)
u_y = u.diff(y)
ecuacion = sp.Eq(4*u_x + 2*u_y, 0)
print(ecuacion)

sp.pdsolve(ecuacion)
print(sp.pdsolve(ecuacion))