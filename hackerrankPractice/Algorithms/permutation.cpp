#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int f=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			f=0;
			cout<<"NO"<<endl;
			break;
		}
	}
	if(f==1)
		cout<<"YES"<<endl;
}