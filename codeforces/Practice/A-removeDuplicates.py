n = int(input())
li = list(map(int, input().split()))
dict = {}
for i in range(len(li)):
    dict[li[i]] = i
dict = sorted(dict.items(), key=lambda x:x[1])
print(len(dict))
for i in dict:
    print(i[0],'', end='')
print('')