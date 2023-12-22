for x in range(int(input())):
    n=int(input())
    line=input()
    ans=sum( [line.count(chr(ord('A') + i) ) >= i + 1 for i in range(26)])
    print(ans)
