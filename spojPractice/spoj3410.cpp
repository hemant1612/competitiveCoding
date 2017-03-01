#include <iostream>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		int n;
		cin>>n;
		if(n==0)
			f=0;
		else
		{
			int ans=n*(n+1)*(2*n+1)/6;
			cout<<ans<<endl;
		}
	}
}