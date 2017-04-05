#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int prime[b+1];
	for(int i=0;i<=b;i++)
		prime[i]=1;
	for(int i=2;i<=sqrt(b);i++)
	{
		if(prime[i]==1)
		{
			for(int j=i*i;j<=b;j+=i)
			{
				prime[j]=0;
			}
		}
	}
	vector<int> primeC;
	int counter=0;
	for(int i=a;i<=b;i++)
	{
		
		int ans=1;

		int copy=i;
		for(int j=2;j<=copy;j++)
		{
			
			if(prime[j]==1)
			{
				int power=0;
				while(copy%j==0)
				{
					copy/=j;
					power++;
				}
				ans*=(power+1);
			}
		}
		if(ans==n)
			counter++;
	}
	cout<<counter<<endl;
}