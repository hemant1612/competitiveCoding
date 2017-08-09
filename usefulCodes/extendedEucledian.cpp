#include <iostream>
using namespace std;
int d,x,y;
void extendedEuclid(int a,int b)
{
	if(b==0)
	{
		d=a;
		x=1;
		y=0;
	}
	else
	{
		extendedEuclid(b,a%b);
		int temp=x;
		x=y;
		y=temp-(a/b)*y;
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<((a%1000000007)*(modularInverse(b)%1000000007))%1000000007<<endl;
	cout<<"gcd "<<d<<endl;
	cout<<"x y "<<x<<" "<<y<<endl;
}