def f(x):
    return 1 / x
def simpsons_one_third_rule(f, a, b, n):

    if(n % 2 != 0):
        return "hobena brother"

    h = (b - a) / n
    res = f(a) + f(b)
    for i in range(1, n):
        if(i % 2 == 0):
            res += 2 * f(a + (i * h))
        else:
            res += 4 * f(a + (i * h))
    return (h * res) / 3

print(simpsons_one_third_rule(f, 1, 2, 10))
