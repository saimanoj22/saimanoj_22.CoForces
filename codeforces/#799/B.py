# // Problem: B. All Distinct
# // Contest: Codeforces - Codeforces Round #799 (Div. 4)
# // URL: https://codeforces.com/contest/1692/problem/B
# // Memory Limit: 256 MB
# // Time Limit: 1000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

for _ in range(int(input())):
	n = int(input())
	li = list(map(int, input().split()));
	dict = {}
	for i in li:
		if i in dict:
			dict[i] += 1
		else:
			dict[i] = 1
	sum = 0
	for i in dict.values():
		if i > 1:
			sum += i - 1	
	
	if sum % 2 != 0:
		sum += 1
	print(len(li) - (sum))