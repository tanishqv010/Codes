n = int(input())
l = list(map(int,input().split()))
a = 0
for i in l:
    c = l.count(i)
    if(i > n):
        a += l.count(i)
        while(i in l):
            l.pop(l.index(i))
    elif(c != 0 and i != c):
        l.pop(l.index(i))
        a += 1
print(a)