import math
def f(x):
    return 3 * x - math.cos(x) - 1
def secantMethod(f, a, b, tol = 1e-6, iter = 100):
    # no error message
    c = None
    prev_c = None
    curr_iter = 0

    for i in range(iter):
        curr_iter += 1
        c = b - (((b - a) * f(b)) / (f(b) - f(a)))

        if(prev_c == c or abs(f(c)) < tol):
            break
        a = b
        b = c
    return c, curr_iter

root, iter = secantMethod(f, 0, 1)

print(root)
print(iter)