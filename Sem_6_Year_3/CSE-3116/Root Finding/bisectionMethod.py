def f(x):
    return x ** 3 - x - 2
def bisectionMethod(f, a, b, tol = 1e-6, iter = 100):
    if(f(a) * f(b) > 0):
        print("Error: f(a) and f(b) must have different signs")
        return None, 0
    c = None
    prev_c = None
    curr_iter = 0

    for i in range(iter):
        curr_iter += 1
        c = (a + b)/2
        if(c == prev_c or abs(f(c)) < tol):
            break
        if(f(a) * f(c) > 0):
            a = c
        else:
            b = c
        prev_c = c
    return c, curr_iter

ans, iter = bisectionMethod(f, 1, 2)
print(ans)
print(iter)