#include <iostream>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		int n;
		cin>>n;
		if(n==-1)
			f=0;
		else
		{
			int *a;
			a=new int[n];
			for(int i=0;i<n;i++)
				cin>>a[i];
			int sum=0;
			for(int i=0;i<n;i++)
			{
				sum=sum+a[i];
			}
			if(sum%n==0)
			{
				int mean=sum/n;
				int moves=0;
				for(int i=0;i<n;i++)
				{
					if(a[i]<mean)
					{
						moves=moves+mean-a[i];
					}

				}
				cout<<moves<<endl;
			}
			else
				cout<<"-1\n";
		}
	}
	return 0;
}