n=int(input())
l=[]
for i in range(0,n):
	k=int(input())
	l.append(k)
l.sort()
for i in range(0,n):
	print(l[i])