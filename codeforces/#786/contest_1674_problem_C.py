# // Problem: C. Infinite Replacement
# // Contest: Codeforces - Codeforces Round #786 (Div. 3)
# // URL: https://codeforces.com/contest/1674/problem/C
# // Memory Limit: 256 MB
# // Time Limit: 2000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)


for _ in range(int(input())):
	s = input()
	t = input()
	flag = 0
	for i in t:
		if i == 'a':
			flag = 1
	
	if t == "a":
		print(1)
	elif flag == 1:
		print(-1)
	else:
		print(pow(2, len(s)))
		