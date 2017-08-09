from fractions import gcd
t=int(input())

def binary_exp(x,n,prime): #calculate x^n%p
	if n==0:
		return 1
	elif n==1:
		return x%prime
	else:
		temp=binary_exp(x,int(n/2),prime)
		temp=(temp*temp)%prime
		if n%2==0:
			return temp
		else:
			return (x%prime*temp)%prime

def inverse(x,prime):
	return binary_exp(x,prime-2,prime)

while t!=0:
	t-=1
	n=int(input())
	n=n-1
	if n!=0:
		numerator=n*(n+1)
		denominator=2*(2*n-1)
		factor=gcd(numerator,denominator)
		numerator=numerator//factor
		denominator=denominator//factor
		prime1=1000000007
		prime2=1000000009
		ans1=(numerator)*(inverse(denominator,prime1))
		ans2=(numerator)*(inverse(denominator,prime2))
		print(ans1%prime1,ans2%prime2)
	else:
		print("0 0")
