d=0
x=0
y=0
def extendedEuclid(a,b):
	global d,x,y
	if b==0:
		d=a
		x=1
		y=0
	else:
		extendedEuclid(b,a%b)
		temp=x
		x=y
		y=temp-int(a/b)*y

def modInverse(a,m):
	extendedEuclid(a,m)
	global x
	return (x%m+m)%m

a=int(input())
b=int(input())
ans=modInverse(b,1000000009)
print((a%1000000009*ans)%1000000009)