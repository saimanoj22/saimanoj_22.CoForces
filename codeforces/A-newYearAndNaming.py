n = list(map(str,input().split()))
nli = list(map(str,input().split()))
mli = list(map(str,input().split()))
q = int(input())
for i in range(q):
    temp = int(input())
    num1 = temp % len(nli)
    num2 = temp % len(mli)
    if num1 == 0:
        num1 = len(nli)
    if num2 == 0:
        num2 = len(mli)
    print(nli[num1-1]+mli[num2-1])