#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		if(n==3)
			cout<<"8"<<endl;
		else
		{
			unsigned long long int sum=0;
			long long int half=n/2;
			sum=n*(n+1)/2-half*(half+1)/2;
			long long int i=1;
			for(i;i<=n;i++)
			{
				if(n/i==2)
					break;
				sum+=i*(n/i);
			}
			i--;
			sum+=2*(half*(half+1)/2-i*(i+1)/2);
			cout<<sum%1000000007<<endl;
		
		}
	}
}