# // Problem: B. Shoe Shuffling
# // Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
# // URL: https://codeforces.com/contest/1691/problem/B
# // Memory Limit: 256 MB
# // Time Limit: 1000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

for _ in range(int(input())):
    n = input()
    li = list(map(int, input().split()))
    dict = {}
    for i in li:
        if i in dict:
            dict[i] += 1
        else:
            dict[i] = 1
    
    flag = 0
    for i in dict.values():
        if i == 1:
            flag = 1
            break
    if flag == 1:
        print(-1)
    else:
        count = 1
        for i in dict.values():
            print(count + i - 1, '', end='')
            for j in range(count, count + i - 1):
                print(j, '', end='')
            count += i
        print()
        