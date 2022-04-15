# // Problem: D. Deletive Editing
# // Contest: Codeforces - 2021-2022 ICPC, NERC, Northern Eurasia Onsite (Unrated, Online Mirror, ICPC Rules, Teams Preferred)
# // URL: https://codeforces.com/contest/1666/problem/D
# // Memory Limit: 512 MB
# // Time Limit: 3000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

for _  in range(int(input())):
    s, t = map(str, input().split())
    s, t = s[::-1], t[::-1]
    li = []
    check = [0] * len(s)
    for i in range(len(t)):
        for j in range(len(s)):
            if(s[j] == t[i]) and check[j] != 1:
                li.append(j)
                check[j] = 1
                break
    if li == sorted(li) and len(li) == len(t):
        print('YES')
    else:
        print('NO')