from sys import stdin, stdout
t=int(input())
while t!=0:
	t=t-1
	x,y,n = map(int, stdin.readline().rstrip().split())
	term=n%6
	if term==1:
		print(x%1000000007)
	elif term==2:
		print(y%1000000007)
	elif term==3:
		print((y-x)%1000000007)
	elif term==4:
		print((-1*x)%1000000007)
	elif term==5:
		print((-1*y)%1000000007)
	else:
		print((x-y)%1000000007)