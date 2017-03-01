#include <iostream>
using namespace std;
int gcdRecursive(int n,int m)
{
	if(n<m)
		return gcdRecursive(m,n);
	if(m==0)
		return n;
	return gcdRecursive(m,n%m);
}
/*int gcd(int n,int m)
{
	if(n<m)
	{
		int temp=n;
		n=m;
		m=temp;
	}
	while(m>0)
	{
		int temp=n%m;
		n=m;
		m=temp;
	}
	return n;
}*/
void reduceFraction(int n,int m)
{
	cout<<n<<"/"<<m<<"=";
	int k=gcdRecursive(n,m);
	n/=k;
	m/=k;
	cout<<n<<"/"<<m<<"\n";
}
int main()
{
	cout<<"Enter 2 numbers whos gcd has to be found out\n";
	int n,m;
	cin>>n>>m;
	int ans=gcdRecursive(n,m);
	//int ans1=gcd(n,m);
	cout<<"GCD="<<ans<</*" "<<ans1<<*/endl;
	reduceFraction(n,m);
}