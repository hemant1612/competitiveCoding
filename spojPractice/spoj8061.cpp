#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(k==1)
			cout<<"0"<<endl;
		else
		{
			sort(a,a+n);
			int min=a[n-1];
			for(int i=0;i<n-k+1;i++)
			{
				if(min>(a[i+k-1]-a[i]))
					min=a[i+k-1]-a[i];
			}
			cout<<min<<endl;
		}
	}
}