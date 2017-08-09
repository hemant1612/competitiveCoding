from sys import stdin, stdout
t=int(input())
while t!=0:
	t-=1
	n=int(input())
	if n==1:
		r=int(input())
		if r==1:
			print("1")
			print(str(-1%1000000007)+" 1")
		else:
			print("2")
			print(str((-1*r)%1000000007)+" 0 1")
	elif n==2:
		a, b= map(int, stdin.readline().rstrip().split())
		print("4")
		print(str(((a+b)**2-4*a*b)%1000000007)+" 0 "+str((-1*2*(a+b))%1000000007)+" 0 1")
