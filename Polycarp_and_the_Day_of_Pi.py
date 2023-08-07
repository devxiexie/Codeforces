t=int(input())
pithing = "314159265358979323846264338327"
for tc in range(t):
    lst=input()
    ans=0
    for i in range(len(lst)):
        if(lst[i] == pithing[i]):
            ans+=1
        else:
            break
    print(ans)
