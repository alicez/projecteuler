def gcd(a, b):
    return gcd(b%a, a) if a else b
def lcm(a, b):
    return a * b / gcd(a, b)
print(reduce(lcm, range(1, 21), 1))
