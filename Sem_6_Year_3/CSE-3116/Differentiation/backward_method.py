import math

def f(x):
    return x**2 + 3*x + math.sin(x)
def backward_method(f, x, h):
    return (f(x) - f(x - h)) / h

x = float(input())
h = float(input())
print(backward_method(f, x, h))