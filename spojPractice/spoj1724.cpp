#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int unsigned n;
		cin>>n;
		long long int unsigned sum=0;
		sum=pow(n,2);
		n--;
		if(n%2==0)
		{
			int x=n/2;
			sum+=4*(x)*(x+1)*(2*x+1)/6;
		}
		else
		{
			int x=(n-1)/2+1;
			sum+=4*(x)*(x+1)*(2*x+1)/6+x-2*(x)*(x+1);
		}
		cout<<sum<<endl;
	}
}
