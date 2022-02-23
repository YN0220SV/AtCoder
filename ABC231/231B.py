#A=int(input())
#S=list(input().split())
n=int(input())
S = []
for i in range(n):
    l = input()
    S.append(l)
print(S)
print(sorted([(S.count(a), a) for a in [input() for i in n]])[-1][1])
maxcount=0
nowcount=0
maxstring=""
for a in S:
    nowcount=S.count(a)
    print(nowcount)
    if(nowcount>maxcount):
        maxcount=nowcount
        maxstring=a
print(maxstring)


#s=[input() for _ in range(int(input()))]

#print(max(s, key=s.count))
