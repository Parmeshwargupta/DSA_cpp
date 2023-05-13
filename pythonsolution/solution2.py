# Recursive python program to reverse an array
# function to reverse A[] from start to end
def reverslist(A, start, end):
    if start >= end:
        return
    A[start], A[end] = A[end], A[start]
    reverslist(A, start+1, end-1)


# Drive function to test above function
A = [1, 2, 3, 4, 5, 6]
print(A)
reverslist(A, 0, 5)
print("Reversed list is")
print(A)
