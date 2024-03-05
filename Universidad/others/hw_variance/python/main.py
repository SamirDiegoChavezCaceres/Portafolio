class A:
    def boo(self):
        print("A::boo")
class B(A):
    def boo(self):
        super().boo()
        print("B::boo")
class C(B):
    def boo(self):
        super().boo()
        print("C::boo")
class X:
    def foo(self, b):
        return b
class Y(X):
    def foo(self, a):
        return a 
a = A()
b = B()
c = C()
x = X()
y = Y()
y.foo(c).boo()