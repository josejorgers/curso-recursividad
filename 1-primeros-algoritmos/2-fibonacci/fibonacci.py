def fibonacci(n):
    if n <= 2:
        return 1
    
    return fibonacci(n - 1) + fibonacci(n - 2)


if __name__ == '__main__':
    n = int(input("N = "))
    print(f"Fibonacci de {n} es: {fibonacci(n)}")