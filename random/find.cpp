#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int counter=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
		}
	}
	/*for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(k!=i && k!=j)
				{
					if(a[i]+a[j]==2*a[k])
					{
						counter++;
					}
				}
			}
		}
	}*/
	cout<<counter<<endl;
	return 0;
}