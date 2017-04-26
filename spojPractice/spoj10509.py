t=int(input())
while t:
	n=int(input())
	print ((int(n*(n+1)+((n-1)*n)/2))%1000007)
	t-=1