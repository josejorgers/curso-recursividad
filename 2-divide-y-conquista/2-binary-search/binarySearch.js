

function binarySearch(array, n, a, b){

    if(a > b)
        return -1

    const m = (a + b) / 2;

    if(array[m] === n)
        return m

    if(array[m] > n)
        return binarySearch(array, n, a, m-1)

    return binarySearch(array, n, m+1, b)
}


function search(array, n){

    return binarySearch(array, n, 0, array.length - 1)
}