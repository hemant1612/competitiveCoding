#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		int n;
		cin>>n;
		int ans=0;
		while(n>4)
		{
			ans=ans+n/5;
			n/=5;
		}
		cout<<ans<<endl;
	}
}