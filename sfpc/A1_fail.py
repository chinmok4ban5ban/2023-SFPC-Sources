from itertools import permutations

h, m = map(int, input().split(':'))
hl, ml = map(int, input().split(':'))
max_time = 0
garos = 6
seros = 6
a = []
for i in range(garos):
    garo_input = input()
    garo = [int(num) for num in garo_input.split()]
    
    a.append(garo)
b = list(permutations([1,2,3,4,5], 5))
max_time = (hl - h)*60 + (ml - m)
for i in range(len(b)):
    d = 0
    c = list(b[i])
    for j in range(len(c)):
        if j == 0:
            d = d + a[0][c[j]]
        else:
            d = d + a[c[j-1]][c[j]]
            k = j
    d = d + a[c[k]][0]
    if i == 0:
        temp = d
    if (d <= temp):
        temp = d
temp = max_time - temp
print(str(format(temp//60, '02'))+":"+str(temp%60))
