#include <iostream>
#include <math.h>
using namespace std;
int* primeG(int sqn)
{
	int *m;
	m=new int[sqn];
	for(int i=0;i<sqn;i++)
		m[i]=1;
	int sqqn=(int)(floor(sqrt(sqn)));
	int counter=0;
	for(int i=2;i<=sqqn;i++)
	{
		int count=0;
		if(m[i]==1)
		{
			for(int j=i*i;j<sqn;j=i*i+count*i)
			{
				m[i]=0;
				count++;
				counter++;
			}
		}
	}
	int *prime;
	int count=0;
	prime=new int[counter];
	for(int i=0;i<sqn;i++)
	{
		if(m[i]==1)
		{
			prime[count]=i;
			count++;
		}
	}
	return prime;
}
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		int m,n;
		cin>>m>>n;
		int sqn=(int)(floor(sqrt(n+1)));
		int *a;
		a=primeG(sqn);
		int *array;
		int count=0;
		array=new int[n+1];
		for(int i=0;i<=n;i++)
			array[i]=1;
		for(int i=m;i<=n;i++)
		{
			int k=(int)(floor(i/a[count]));
			int k1=k*a[count];
			int counter=0;
			for(int j=k1;j<=n;j=j+counter*a[count])
			{
				array[j]=0;
				counter++;
			}
			count++;
		}
		for(int i=m;i<=n;i++)
		{
			if(array[i]==1)
				cout<<i<<endl;
		}
	}
}
