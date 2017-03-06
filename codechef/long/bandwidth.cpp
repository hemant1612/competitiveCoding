#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		int counter=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
					counter++;
			}
		}
		if(counter<=n)
			cout<<"0\n";
		else
		{
			int ans=1;
			int sum=n;
			for(int r=1;r<=n-1;r++)
			{
				sum=sum+(n-r)*2;
				if(counter<=sum)
				{
					cout<<ans<<endl;
					break;
				}
				ans++;
			}
		}
	}
}