n = int(input())
li = list(map(int, input().split()))
dict = {}
for i in li:
    if i not in dict:
        dict[i] = 1
    else:
        dict[i] += 1
max = 0
for i in dict.values():
    if max < i:
        max = i
print(max)