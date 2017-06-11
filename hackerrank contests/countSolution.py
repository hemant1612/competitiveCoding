from sys import stdin, stdout
import math
t=int(input())
for i in range (1,t+1):
	a, b, c, d = map(int, stdin.readline().rstrip().split())
	counter=0
	for y in range(1,min(b,d)+1):
		d=math.sqrt(a*a+4*y*(b-y))
		if(int(d)==math.ceil(d)):
			if (a+d)%2==0 and (a+d)/2<=c:
				counter+=1
			if (a-d)>=2:
				if (a-d)%2==0 and (a-d)/2<=c:
					counter+=1
	stdout.write( str(counter) + "\n" )