def f(x):
    return 1 / x
def trapezoidal_rule(f, a, b, n):

    # no restriction, any positive int
    
    h = (b - a) / n
    res = f(a + 0) + f(a + (n * h))
    # res = f(a) + f(b) # use this, ekh e kotha
    for i in range(1, n):
        res += 2 * f(a + (i * h))
    return (h * res) / 2

print(trapezoidal_rule(f, 1, 2, 10))