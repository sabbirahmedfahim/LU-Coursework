def f(x):
    return x**2 + 3*x + 5
def forward_method(f, x, h):
    return (f(x + h) - f(x)) / h

x = float(input())
h = float(input())
print(forward_method(f, x, h))