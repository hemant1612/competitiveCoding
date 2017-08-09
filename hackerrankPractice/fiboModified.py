from sys import stdin, stdout
t1,t2,n = map(int, stdin.readline().rstrip().split())
d={1:t1,2:t2}
if n==1:
	print(t1)
elif n==2:
	print(t2)
else:
	for i in range(3,n+1):
		d[i]=d[i-2]+pow(d[i-1],2)
	print(d[n])