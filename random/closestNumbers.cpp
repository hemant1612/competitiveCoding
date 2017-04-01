#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int min=2000000000;
	for(int i=0;i<n-1;i++)
	{
		if((a[i+1]-a[i])<min)
			min=a[i+1]-a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i+1]-a[i]==min)
		{
			cout<<a[i]<<" "<<a[i+1]<<" ";
		}
	}
	cout<<endl;
}