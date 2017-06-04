from sys import stdin, stdout
import math
for j in range (1,11):
	sum=0
	for i in range(1,j+1):
		sum+=math.floor(i*2.718)
	stdout.write( str(sum) + "\n" )