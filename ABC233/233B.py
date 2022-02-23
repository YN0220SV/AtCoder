L, R = map(int,input().split())
# R=int(input())
S = input()
first = ""
second=""
third=""
revsecond=""
ans=""
for i in range(0, L-1):
    first += S[i]
for i in range(L-1,R):
    second +=S[i]
for i in range(R,len(S)):
    third+=S[i]
revsecond=second[::-1]

ans=first+revsecond+third
print(ans)
