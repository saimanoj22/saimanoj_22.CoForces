# // Problem: B. Letters Rearranging
# // Contest: Codeforces - Educational Codeforces Round 56 (Rated for Div. 2)
# // URL: https://codeforces.com/contest/1093/problem/B
# // Memory Limit: 256 MB
# // Time Limit: 1000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

for _ in range(int(input())):
	s = input()
	s = list(s)
	if s != s[::-1]:
		print(*s, sep = "")
	else:
		temp = sorted(s)
		if s == temp[::-1]:
			print(-1)
		else:
			print(*temp, sep = "")