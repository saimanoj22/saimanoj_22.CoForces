# // Problem: A. Karen and Morning
# // Contest: Codeforces - Codeforces Round #419 (Div. 2)
# // URL: https://codeforces.com/problemset/problem/816/A
# // Memory Limit: 512 MB
# // Time Limit: 2000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)

s = input()
h = int(s[:2])
m = int(s[3:])
time = (h * 60) + m
temp = time
palindrome = [0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412]

flag = time
while True:
	if flag in palindrome:
		break
	time += 1
	flag += 1
	if flag == 1440:
		flag = 0
print(abs(time - temp))