T=int(input())
for t in range(T):
    n = int(input())
    A = []
    B = []
    for N in range(n):
        s = input()
        a, b = s.split()
        A.append(a)
        B.append(b)
    C = []
    for i in range(n):
        C.append('')

    for i in range(n):
        count = 0
        for j in range(i + 1,n):
            if A[i] == A[j]:
                count = 1
                C[i] = A[i] + ' ' + B[i]
                C[j] = A[i] + ' ' + B[j]
        if count == 0:
            if (C[i] == ''):
                C[i] = A[i]

    for i in range(n):
        print(C[i])