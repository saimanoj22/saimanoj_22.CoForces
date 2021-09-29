num = int(input())
li = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for i in range(0,num):
    stri = input()
    stri = sorted(stri)
    num1 = li.index(stri[0])
    num2 = len(stri)
    #print(num1,num2)
    stri2 = li[num1:num1+num2]
    #print(stri,stri2)
    #print(stri2)
    if stri == stri2:
        print("Yes")
    else:
        print("No")