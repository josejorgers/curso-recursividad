
def hanoi_towers(n, origin, auxiliar, final):
    if n == 1:
        print(f'Mover disco de {origin} a {final}')
    else:
        hanoi_towers(n-1, origin, final, auxiliar)
        print(f'Mover disco de {origin} a {final}')
        hanoi_towers(n-1, auxiliar, origin, final)


if __name__ == '__main__':
    n = int(input("N = "))
    hanoi_towers(n, 'A', 'B', 'C')