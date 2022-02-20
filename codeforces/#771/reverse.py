for i in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    for i in range(len(li)):
        if li[i] != i+1:
            index = li.index(i+1)
            li[i:index+1] = li[i:index+1][::-1]
            break
    print(*li)