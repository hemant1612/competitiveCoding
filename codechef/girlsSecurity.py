from sys import stdin, stdout
from decimal import *
getcontext().prec=6
t=int(input())
while t!=0:
	t-=1
	u,v,x = map(int, stdin.readline().rstrip().split())
	print("%.10f" %((x)/(u+v)))