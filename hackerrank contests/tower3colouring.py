import math
from sys import stdin, stdout
def modular_pow(b,e,m):
	if m==1:
		return 0
	c=1
	for e_prime in range (0,e):
		c=(c*b)%m
	return c
n=int(input())
stdout.write( str(modular_pow(3,int(math.pow(3,n)),1000000007))+"\n")