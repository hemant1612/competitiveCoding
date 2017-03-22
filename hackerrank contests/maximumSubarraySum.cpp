#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{	
			int x;
			cin>>x;
			a[i]=x%m;
		}
		int sum=0;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			sum=max(a[i]%m,(sum+a[i])%m);
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
}