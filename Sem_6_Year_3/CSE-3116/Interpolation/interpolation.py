def lagrange(x_list, y_list, x):
    n = len(x_list)
    res = 0
    for i in range(0, n):
        L = 1
        for j in range(0, n):
            if(i != j):
                L *= (x - x_list[j])/(x_list[i] - x_list[j])
        res += L * y_list[i]
    return res

x_list = [2, 7, 10, 12]
y_list = [4, 49, 100, 144]
x = 5

print(lagrange(x_list, y_list, x))