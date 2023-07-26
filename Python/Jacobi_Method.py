import math

n = float(input("\n\n\nEnter the number of digits after decimal for approximation : "))
N = int(input("\nEnter number of equations/variables : "))

print("\n\nEnter the coefficients of equations in the form \'a b c d....k\' for each equation of the form \'ax1 + bx2 + cx3 + dx4.... = k\' separately\n")

sequence = [[0]] * N
check = []

for i in range(N):
    coeff_eqn = input("Equation", i+1, ":").split()
    coeff_eqn = [float(j) for j in coeff_eqn]
    # print(coeff_eqn)
    temp = coeff_eqn.copy()
    temp = temp[:-1]
    temp.sort()
    # print(temp)
    # print(coeff_eqn)
    for k in range(N):
        if(coeff_eqn[k] == temp[-1]):
            if k in check:
                coeff_eqn = [float(-j) for j in coeff_eqn]
                temp = coeff_eqn.copy()
                temp = temp[:-1]
                temp.sort()
                # print(temp)
                # print(coeff_eqn)
            if(coeff_eqn[k] == temp[-1]):
                sequence[k] = coeff_eqn
                check.append(k)

# print(sequence)

solution = []
iteration = [0]*(N)
solution.append(iteration)

while(True):
    iteration = []
    for i in range(N):
        x = sequence[i][-1]
        # print(x)
        for j in range(N):
            if(i == j):
                continue
            x -= sequence[i][j] * solution[-1][j]
        # x += sequence[i][i] * solution[i][i]
        x /= sequence[i][i]
        iteration.append(x)
    solution.append(iteration)
    score = -1
    for k in range(N):
        if(math.isclose(solution[-1][k], solution[-2][k], abs_tol=float(10**(-n)))):
            score = 1
        else:
            score = 0
            break
    if(score == 1):
        # print(solution)
        final_soln = []
        final_soln = [round(i*(10**n))/(10**n) for i in solution[-1]]
        print("\n\nFollowing are the solutions to the given equation :", final_soln)
        break