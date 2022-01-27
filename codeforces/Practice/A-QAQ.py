stri = input()
qcount = stri.count('Q')
result = 0
count = 0
for i in stri:
    if i == 'A':
        result += count * (qcount-count)
    if i == 'Q':
        count += 1
print(result)