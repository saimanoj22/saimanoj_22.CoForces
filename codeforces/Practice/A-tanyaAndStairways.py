num = int(input())
li = list(map(int, input().split()))
count = 0
temp = []
for i,j in enumerate(li):
    if j == 1:
        count += 1
    if i != 0 and j == 1:
        temp.append(li[i-1])
temp.append(li[len(li) - 1])
print(count)
print(*temp)