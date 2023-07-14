t=int(input())
for tc in range(t):
    s=input()
    n=len(s)
    m=int(input())
    l=input()
    r=input()
    mx=0
    for i in range(m):
        li=int(l[i])
        ri=int(r[i])
        nextmx=mx
        for c in range(li, ri+1):
            cur=mx
            while(cur<n and int(s[cur])!=c):
                cur+=1
            nextmx=max(nextmx,cur)
        mx=nextmx+1
    if(mx>n):
        print("YES")
    else:
        print("NO")
