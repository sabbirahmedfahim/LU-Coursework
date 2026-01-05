import math
def f(x):
    return 3 * x - math.cos(x) - 1
def falsePositionMethod(f, a, b, tol = 1e-6, iter = 100):
    if(f(a) * f(b) > 0):
        # error msg
        return None, 0
    c = None
    prev_c = None
    curr_iter = 0

    for i in range(iter):
        curr_iter += 1
        c = ((a * f(b)) - (b * f(a))) / (f(b) - f(a))

        if(prev_c == c or abs(f(c)) < tol):
            break
        if(f(a) * f(c) > 0):
            a = c
        else:
            b = c
        prev_c = c
    return c, curr_iter

root, iter = falsePositionMethod(f, 0, 1)

print(root)
print(iter)