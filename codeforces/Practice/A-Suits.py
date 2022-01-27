a = int(input())
b = int(input())
c = int(input())
d = int(input())
temp = d
e = int(input())
f = int(input())
 
suit1 = min(a,d)
d -= suit1
if d < 0:
    d = 0
suit2 = min(b,c,d)
 
d = temp
suit3 = min(b,c,d)
d -= suit3
if d < 0:
    d = 0
suit4 = min(a,d)
 
suit1 *= e
suit2 *= f
suit3 *= f
suit4 *= e
if suit1+suit2 > suit3+suit4:
    print(suit1+suit2)
else:
    print(suit3+suit4)