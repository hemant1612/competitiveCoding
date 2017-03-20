#include <iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n][d];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<d;j++)
			cin>>a[i][j];
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int dist=0;
			for(int k=0;k<d;k++)
			{
				dist+=abs(a[i][k]-a[j][k]);
			}
			if(dist>max)
					max=dist;
		}
	}
	cout<<max<<endl;
}