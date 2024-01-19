from itertools import permutations

n, m, t = map(int, input().split())
count = 0
real_count = 0
d = 0
a = list(map(int, input().split()))
b = list(permutations(a, m))
for i in range(len(b)):
    d = 0
    c = list(b[i])
    for j in range(len(c)):
        d = d + c[j]
    d = d + 5 * (m+1)
    if (d <= t):
        count = count + 1

print(count)
