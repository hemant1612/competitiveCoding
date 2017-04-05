#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,W;
		cin>>n>>W;
		double v[n],wt[n];
		for(int i=0;i<n;i++)
			cin>>wt[i];
		for(int j=0;j<n;j++)
			cin>>v[j];
		double a[n];
		for(int i=0;i<n;i++)
		{
			a[i]=v[i]/wt[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}