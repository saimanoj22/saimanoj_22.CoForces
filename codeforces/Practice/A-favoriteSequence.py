for _ in range(int(input())):
    num = int(input())
    li = list(map(int, input().split()))
    temp = []
    end = len(li) - 1
    start = 0
    for i,j in enumerate(li):
        if (i+1) % 2 == 0:
            temp.append(li[end])
            end -= 1
        else:
            temp.append(li[start])
            start += 1
    print(*temp)