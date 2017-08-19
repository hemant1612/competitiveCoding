#a, b, c, d = map(int, stdin.readline().rstrip().split())
from sys import stdin, stdout
t=int(input())
while t!=0:
	t-=1
	n,d= map(int, stdin.readline().rstrip().split())
	sumTotal=0
	a=[int(x) for x in input().split()]
	for i in range(len(a)):
		sumTotal+=a[i]
	ans=0
	f=1
	if sumTotal%n==0:
		mean=sumTotal//n
		for i in range(len(a)):
			if i+d<n:
				diff=a[i]-mean
				a[i]=mean
				a[i+d]=diff+a[i+d]
				ans+=abs(diff)
			else:
				if a[i]!=mean:
					f=0
					break
	else:
		f=0
	for i in range(len(a)-1):
		if a[i]!=a[i+1]:
			f=0
			break
	if(f==1):
		print(ans)
	else:
		print("-1")