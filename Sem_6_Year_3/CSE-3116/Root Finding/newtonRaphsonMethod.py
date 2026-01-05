def f(x):
    return x**3 
def df(x):
    return 3 * x ** 2
def newtonRaphsonMethod(f, df, x, tol = 1e-6, iter = 100):
    c = None
    prev_c = None
    curr_iter = 0

    for i in range(iter):
        curr_iter += 1
        c = x - (f(x) / df(x))
        if(c == prev_c or abs(f(c)) < tol):
            break
        prev_c = c
        x = c
    return c, curr_iter

root, iter = newtonRaphsonMethod(f, df, 0.5)
print(root)
print(iter)