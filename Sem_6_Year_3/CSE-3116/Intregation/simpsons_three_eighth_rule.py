def f(x):
    return 1 / x
def simpsons_three_eighth_rule(f, a, b, n):

    if(n % 3 != 0):
        return "Sorry, n thik hoy ni"

    h = (b - a) / n
    res = f(a) + f(b)
    for i in range(1, n):
        if(i % 3 == 0):
            res += 2 * f(a + (i * h))
        else:
            res += 3 * f(a + (i * h))
    return (3 * h * res) / 8

print(simpsons_three_eighth_rule(f, 1, 2, 10))