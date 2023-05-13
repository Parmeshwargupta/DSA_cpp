def rotate(l, d, n):
    k = l.index(d)
    new_lis = []
    new_lis = l[k+1:]+l[0:k+1]
    return new_lis


if __name__ == '__main__':
    arr = [1, 2, 3, 4, 5, 6, 7]
    d = 2
    N = len(arr)

    # Function call
    arr = rotate(arr, d, N)
    for i in arr:
        print(i, end=" ")
