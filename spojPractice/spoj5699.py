from sys import stdin, stdout
t=int(input())
while t!=0:
	t-=1
	a, b= map(int, stdin.readline().rstrip().split())
	if a==0:
		print("0")
	else:
		if b==0:
			print("1")
		else:
			b=b%4
			if b==0:
				b=4
			ans=1
			for i in range(b):
				ans=ans*a
			print(ans%10)