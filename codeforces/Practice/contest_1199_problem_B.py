# Problem: B. Water Lily
# Contest: Codeforces - Codeforces Round #576 (Div. 2)
# URL: https://codeforces.com/contest/1199/problem/B
# Memory Limit: 256 MB
# Time Limit: 1000 ms
# 
# Powered by CP Editor (https://cpeditor.org)

h, l = map(int, input().split())
numer = (l * l) - (h * h)
denomi = 2 * h
print(numer / denomi)