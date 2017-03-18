#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[5];
	for(int i=0;i<5;i++)
		a[i]=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x-1]++;
	}
	int max=0;
	int ans=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			ans=i;
		}
	}
	cout<<endl;
	cout<<ans+1<<endl;
}
