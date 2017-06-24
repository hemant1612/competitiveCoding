#include <iostream>
typedef unsigned long long int ulli;
using namespace std;
/*	this  funciton takes in 3 parameters b (base) e (exponent) m (modulus)
	and returns (b^e)%m
*/

ulli modular_pow(ulli b,ulli e,ulli m)
{
	if(e==0)
		return 1;
	if(e==1)
		return b;
	else
	{
		ulli res=1;
		b=b%m;
		while(e>0)
		{
			if(e&1) //e%2
				res=(res*b)%m;
			e=e>>1;
			b=(b*b)%m;
		}
		return res%m;
	}
}

int main()
{
	ulli b,e,m;
	cin>>b>>e>>m;
	ulli ans=modular_pow(b,e,m);
	cout<<ans<<endl;
	return 0;
}