def powerOfTwo(n):
    if(n == 0):
        return 0
    while n != 1:
        n /= 2
        if n %2 != 0 and n != 1:
            return 0
    return 1
for _ in range(int(input())):
    n = int(input())
    if powerOfTwo(n):
        print('NO')
    else:
        print('YES')