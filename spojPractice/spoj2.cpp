#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		int m,n;
		cin>>m>>n;
		int sqn=(int)sqrt(n);
		int *p;
		p=new int[(long)ceil(double(sqrt(n)))];
		for(int i=0;i<(int)sqrt(n);i++)
			cout<<p[i]<<endl;
	}
}
int* primeG(int n)
{
	int *m;
	m=new int[n];
	for(int i=0;i<n;i++)
		m[i]=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		int counter=0;
		if(m[i]==1)
		{
			for(int j=i*i;j<n;j=i*i+counter*i)
			{
				m[j]=0;
				counter++;
			}
		}
	}
	int *prime;
	prime=new int[(long)ceil(double(sqrt(n)))];
	int count=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(m[i]==true)
		{
			prime[count++]=i;
		}
	}
	return prime;
}