#include <iostream>
#include <math.h>
using namespace std;
#define lli long long int
unsigned lli poW(lli x,unsigned lli y)
{
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}
int main()
{
	while(1)
	{
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0)
			break;
		else 
		{
			cout<<poW(x,y)<<endl;
			cout<<pow(x,y)<<endl;
		}
	}
}