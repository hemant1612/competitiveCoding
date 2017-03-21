#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i=1;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=k-x;
		}
		cout<<"Case "<<i<<": "<<k+sum<<endl;
		i++;
	}
}