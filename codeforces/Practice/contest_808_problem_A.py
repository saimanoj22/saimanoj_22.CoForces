# Problem: A. Lucky Year
# Contest: Codeforces - Educational Codeforces Round 21
# URL: https://codeforces.com/contest/808/problem/A
# Memory Limit: 256 MB
# Time Limit: 1000 ms
# 
# Powered by CP Editor (https://cpeditor.org)

s = input()
length = len(s)
num = int(s)
i = 10**length
while i > num:
	decr = 10**(length - 1)
	i -= decr
i += decr
print(i - num)