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

print(binary_exp(5,1000000005,1000000007))