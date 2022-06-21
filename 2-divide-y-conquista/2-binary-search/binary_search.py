

def binary_search(array, n, a, b):

    if a > b:
        return -1
    
    m = (a + b) // 2

    if array[m] == n:
        return m

    if array[m] > n:
        return binary_search(array, n, a, m-1)
    
    return binary_search(array, n, m+1, b)


def search(array, n):
    return binary_search(array, n, 0, len(array) - 1)



array = [1, 2, 3, 4, 5, 6, 7]

print(search(array, 7))