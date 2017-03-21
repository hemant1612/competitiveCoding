#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int generate=(int)(sqrt(n)+1);
		long long int a[generate];
		//cout<<"generate "<<generate<<endl;
		for(long long int i=0;i<generate;i++)
			a[i]=1;
		for(long long int i=2;i*i<generate;i++)
		{
			if(a[i]==1)
			{
				for(long long int j=i*i;j<generate;j+=i)
				{
					a[j]=0;
				}
			}
		}
		long long int counter1=0,counter2=0;
		for(long long int i=2;i<generate;i++)
		{
			if(a[i]==1)
			{
				counter1++;
				if(i*i>k)
					counter2++;
			}
		}
		cout<<counter1<<" "<<counter2<<endl;
	}
}