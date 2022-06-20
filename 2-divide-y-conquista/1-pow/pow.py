

def pow(base, exp):
    if exp == 0:
        return 1
    
    if exp % 2 == 0:
        aux = pow(base, exp / 2)
        return aux * aux
    
    return base * pow(base, exp - 1)


print(pow(5, 3))