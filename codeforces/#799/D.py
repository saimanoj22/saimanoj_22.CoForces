# // Problem: D. The Clock
# // Contest: Codeforces - Codeforces Round #799 (Div. 4)
# // URL: https://codeforces.com/contest/1692/problem/D
# // Memory Limit: 256 MB
# // Time Limit: 1000 ms
# // 
# // Powered by CP Editor (https://cpeditor.org)


for _ in range(int(input())):
	s = input()
	li = s.split(' ')
	s = li[0]
	k = int(li[1])
	kh = k // 60
	k -= kh * 60
	km = k % 60
	count = 0

	hh = s[:2]
	mm = s[3:]
	
	while 1:
		hh = int(hh)
		mm = int(mm)
		# print(hh, mm)
		
		hh += kh
		mm += km
		
		if mm >= 60:
			hh += 1
			mm -= 60
		
		if(hh >= 24):
			hh -= 24
		if(mm >= 60):
			mm -= 60
		
		hh = str(hh)
		mm = str(mm)
		
		if len(hh) == 1:
			hh = "0" + hh
		if len(mm) == 1:
			mm = "0" + mm
		
		if hh == mm[::-1]:
			# print(hh + ":" + mm)
			count += 1
		
		temp = hh + ":" + mm
		# print(temp)
		if(temp == s):
			break
	
	print(count)

	