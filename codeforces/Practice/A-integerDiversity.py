for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    dict = {}
    for ele in li:
        if abs(ele) not in dict:
            dict[abs(ele)] = 1
        else:
            dict[abs(ele)] = dict[abs(ele)] + 1
    sum = 0
    #print(dict)
    for key, value in dict.items():
        if(key == 0):
            sum = sum + 1
        else:
            if(value >= 2):
                sum = sum + 2
            else:
                sum = sum + value
    print(sum)