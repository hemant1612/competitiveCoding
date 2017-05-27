from sys import stdin,stdout
s=input()
k,b,m=map(int,stdin.readline().rstrip().split())
length=len(s)
ans=0
for i in range(0,length-k+1):
	s1=s[i:i+k]
	p=k-1
	value=0
	for j in range (0,k):
		x=int(s1[j:j+1])*(b**p)
		p-=1
		value+=x
	ans+=value%m
stdout.write(str(ans)+"\n")