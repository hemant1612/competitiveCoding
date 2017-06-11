#include <iostream>
typedef long long int lli;
using namespace std;
/*	this  funciton takes in 3 parameters b (base) e (exponent) m (modulus)
	and returns (b^e)%m
*/

lli modular_pow(lli b,lli e,lli m)
{
	if (m==1)
		return 0;
	lli c=1;
	for(int e_prime=1;e_prime<=e;e_prime++)
		c=(c*b)%m;
	return c;
}
int main()
{
	lli b,e,m;
	cin>>b>>e>>m;
	lli ans=modular_pow(b,e,m);
	cout<<ans<<endl;
	return 0;
}