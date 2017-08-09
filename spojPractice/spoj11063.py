from sys import stdin, stdout
t=int(input())
while t!=0:
	t-=1
	t3,tl3,s = map(int, stdin.readline().rstrip().split())
	n=int((2*s)/(t3+tl3))
	d=int((tl3-t3)/(n-5))
	t1=t3-d-d
	print(n)
	for i in range(0,n):
		print(t1+i*d,end=' ')
	print()