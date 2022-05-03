# // Problem: B. Triple
# // Contest: Codeforces - Codeforces Round #784 (Div. 4)
# // URL: https://codeforces.com/contest/1669/problem/B
# // Memory Limit: 256 MB
# // Time Limit: 1000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

for _ in range(int(input())):
	n = int(input())
	li = list(map(int, input().split()))
	dict = {}
	for i in range(len(li)):
		if li[i] in dict:
			dict[li[i]] += 1
		else:
			dict[li[i]] = 1
	
	flag = 0
	for i, j in dict.items():
		if j >= 3:
			print(i, end ="")
			flag = 1
			break
			
	if(flag == 0):
		print(-1, end="")
	print('') 