num = int(input())
stri = input()
ocount = 0
ncount = 0
ecount = 0
zcount = 0
rcount = 0
for i in stri:
    if i == 'o':
        ocount += 1
    if i == 'n':
        ncount += 1
    if i == 'e':
        ecount += 1
    if i == 'z':
        zcount += 1
    if i == 'r':
        rcount += 1
onemin = min(ocount, ncount, ecount)
ecount -= onemin
ocount -= onemin
zeromin = min(zcount, ecount, rcount, ocount)
print('1 '*onemin+'0 '*zeromin)