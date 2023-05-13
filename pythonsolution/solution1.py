# Iterative python  program to reverse an array
def reverse_array(A, start, end):
    while start < end:
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1


# drive function to test above function
A = [1, 2, 3, 4, 5, 6]
print(A)
reverse_array(A, 0, 5)
print("reverse array is")
print(A)
