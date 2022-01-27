li = list(map(int, input().split()))
w = li[0]
h = li[1]
k = li[2]
sum = 0
for i in range(k):
    sum += (w+h+w+h)-4
    w -= 4
    h -= 4
print(sum)