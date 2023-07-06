list = [0, 1, 2, 3, 4, 5, 6]
target = 10
for i in range(len(list)):
    for j in range(i, len(list)):
        if(list[i] + list[j] == target and i != j):
            list2 = [i, j]
            print(list2)