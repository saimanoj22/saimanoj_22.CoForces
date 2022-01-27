n = int(input())
name = ''
a = 1
b = 0
c = 1
li = []
count = 0
temp = ''
while a <= n:
    count += 1
    li.append(a)
    if count > 1:
        temp = (a - li[count-2] - 1)*'o'+'O'
    name += temp
    a = b + c
    b = c
    c = a
if(len(name) < n):
    name += (n - len(name))*'o'
print(name)