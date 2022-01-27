for _ in range(int(input())):
    len = list(map(int, input().split()))
    plen = len[1]
    first = plen*'a'
    end = ''
    count = 1
    for i in range(len[0] - plen):
        if count == 4:
            count = 1
        if count == 1:
            end += 'c'
        elif  count == 2:
            end += 'b'
        else:
            end += 'a'
        count += 1
    print(first+end)