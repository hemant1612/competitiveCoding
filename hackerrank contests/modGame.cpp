#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,p,q;
	cin>>n>>p>>q;
	int a[p],b[q];
	for(int i=0;i<p;i++)
		cin>>a[i];
	for(int i=0;i<q;i++)
		cin>>b[i];
	int k=0;
	int m[n+1];
	for(int i=0;i<n+1;i++)
		m[i]=0;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			m[(-(a[i]+b[j])%n+n)%n]++;
		}
	}
	m[n]=m[0];
	int minval=2000000000;
	for(int i=0;i<n;i++)
	{
		minval=min(m[i],minval);
	}
	for(int i=1;i<=n;i++)
	{
		if(minval==m[i])
		{
			cout<<i<<endl;
			break;
		}
	}
}