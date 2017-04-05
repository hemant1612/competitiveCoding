#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
		cin>>a[i];
	long long int ans=0;
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=i+1;j<n;j++)
		{
			ans+=abs(a[i]-a[j]);
		}
	}
	cout<<ans<<endl;
}