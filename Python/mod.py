n = int(input())
l = list(map(int,input().split()))
l2 = []
for j in range(1, n):
    a = 0
    for i in range(0, n-1):
        if(l[i] < l[i+1]):
            a += l[i+1] - l[i]
        else:
            a += l[i] - l[i+1]
    l2.append(a)
    b = l[0]
    l.pop(0)
    l.append(b)
l2.sort(reverse = True)
print(l2[0])