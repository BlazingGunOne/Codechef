T = int(input())

for t in range(T):
    s = input()
    arr = []
    arr = s.split()
    counter = arr.count("not")
    if counter == 0:
        print ("regularly fancy")
    else:
        print ("Real Fancy")