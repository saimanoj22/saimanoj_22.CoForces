# // Problem: B. Unary
# // Contest: Codeforces - Codeforces Beta Round #96 (Div. 2)
# // URL: https://codeforces.com/problemset/problem/133/B
# // Memory Limit: 256 MB
# // Time Limit: 2000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

s = input()
temp = 0
num = 0
d = {'>': "1000", '<': "1001", '+': "1010", '-': "1011", '.': "1100", ',': "1101", '[': "1110", ']': "1111"}
for i in range(len(s) - 1, -1, -1):
	t = d[s[i]]
	for j in range(3, -1, -1):
		num += (2 ** temp) * (int(t[j]))
		num %= 1000003
		temp += 1
print(num)