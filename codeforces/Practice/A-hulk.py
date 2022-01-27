start = "I"
hate = 'hate'
end = 'it'
stri = ''
num = int(input())
if num == 1:
    stri = start + ' ' + hate + ' ' + end
else:
    for i in range(1,num+1):
        if i == 1:
            stri = start + ' ' + hate + ' '
        elif i % 2 == 0:
            stri += ' that I love '
        else:
            stri += ' that I hate '
    stri += end
print(stri)