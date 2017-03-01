#include <iostream>
#include <math.h>
using namespace std;
int gcdRecursive(long long int n,long long int m)
{
	if(n<m)
		return gcdRecursive(m,n);
	if(m==0)
		return n;
	return gcdRecursive(m,n%m);
}
void reduceFraction(long long int n,long long int m)
{
	if(n==0)
	{
		cout<<"0\n";
	}
	else if(n==m)
		cout<<"1\n";
	else
	{
		int k=gcdRecursive(n,m);
		n/=k;
		m/=k;
		cout<<n<<"/"<<m<<"\n";
	}
}
int main()
{
	int f=1;
	while(f==1)
	{
		long long int n,k;
		cin>>n>>k;
		if(n==-1&&k==-1)
		{
			f=0;
			break;
		}
		else
		{
			long long int i=1;
			int ff=1;
			long long int sum=0;
			while(ff=1)
			{
				if((k-2*i)>=0)
				{
					sum+=k-2*i;
					i++;
				}
				else
				{
					ff=0;
					break;
				}
			}
			long long int num=sum*2;
			long long int de=n*(n-1);
			reduceFraction(num,de);
			
		}
	}
}