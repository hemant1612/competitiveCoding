from sys import stdin, stdout
t=int(input())
while t!=0:
	t-=1
	n, b = map(int, stdin.readline().rstrip().split())
	ans=0
	current=(int(n/b))*b
	if n>b:
		index=int(current/b)
		newIndex=0
		if index%2==0:
			newIndex=int(index/2)
		else:
			newIndex=int(index/2)+1
		left=n-newIndex*b
		print((left*newIndex))
	else:
		print("0")