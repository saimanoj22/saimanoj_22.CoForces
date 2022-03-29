# Problem: A. Digits Sequence Dividing
# Contest: Codeforces - Educational Codeforces Round 59 (Rated for Div. 2)
# URL: https://codeforces.com/contest/1107/problem/A
# Memory Limit: 256 MB
# Time Limit: 1000 ms
# 
# Powered by CP Editor (https://cpeditor.org)

for _ in range(int(input())):
	n = int(input())
	s = input()
	s1 = int(s[0])
	s2 = int(s[1:])
	if s1 < s2:
		print('YES')
		print(2)
		print(s1, s2)
	else:
		print('NO')
