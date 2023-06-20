t=int(input());
for tcc in range(t):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))
    nums.sort()
    ans = 0
    prefixy = [0]*(n+1)
    for i in range(n):
        prefixy[i+1] = prefixy[i] + nums[i]
    for i in range(k+1):
        ans = max(ans, prefixy[n-(k-i)] - prefixy[2*i])
    print(ans)
