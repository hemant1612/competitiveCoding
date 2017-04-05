#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long sum=0;
		if(n%2==1)
		{
			sum=pow(n,2)+pow(n-1,2);
			long long p=(n-3)/2;
			sum+=(2*(p)*(p+1)*(2*p+1))/3;
			cout<<sum<<endl;
		}
		else
		{
			sum=pow(n,2)+pow(n-1,2);
			long long p=(n-2)/2;
			sum+=(2*(p)*(p+1)*(2*p+1))/3+p-2*(p)*(p+1);
			cout<<sum<<endl;
		}
	}
}