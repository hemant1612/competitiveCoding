#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int a1=192;
	long long int a2=442;
	long long int a3=692;
	long long int a4=942;
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		long long int k;
		cin>>k;
		long long int m=k%4;
		long long int n=k/4;
		if(m==0)
			{
				m=4;
				n--;
			}
		
		if(m==1)
			cout<<(n*1000+a1)<<endl;
		else if(m==2)
			cout<<(n*1000+a2)<<endl;
		else if(m==3)
			cout<<(n*1000+a3)<<endl;
		else
			cout<<(n*1000+a4)<<endl;
	}
}