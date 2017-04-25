def reverse(n):
	return n/10
t=int(input())
while (t)!=0:
	a,b=map(str,input().split())
	#a=input()
	#b=input()
	a=a[::-1]
	b=b[::-1]
	c=int(a)+int(b)
	c=str(c)
	c=c[::-1]
	print (int(c))
	t=t-1