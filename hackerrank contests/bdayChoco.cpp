#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int d,m;
	cin>>d>>m;
	int ans=0;
	for(int i=0;i<=n-m;i++)
	{
		int counter=0;
		for(int j=i;j<i+m;j++)
			counter+=a[j];
		if(counter==d)
			ans++;
	}
	cout<<ans<<endl;
}