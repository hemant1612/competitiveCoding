#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p=0,s=0;

	for(int k=0;k<n;k++)
	{
		s=max(a[k],s+a[k]);
		p=max(p,s);
		//cout<<p<<endl;
	}
	cout<<p<<endl;
}