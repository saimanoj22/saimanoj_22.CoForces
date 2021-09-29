num = int(input())
stri = input()
ocount = 0
zcount = 0
for i in stri:
    if i == '1':
        ocount += 1
    else:
        zcount += 1
if ocount == 0:
    print('0')
else:
    print('1'+zcount*'0')