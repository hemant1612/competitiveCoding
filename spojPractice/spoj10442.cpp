#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int f=1;
	while(f==1)
	{
		long long int n;
		cin>>n;
		if(n!=0)
		{
			long long int a[n];
			long long int b[n];
			for (long long int i = 0; i < n; ++i)
				cin>>a[i];
			for (long long int i = 0; i < n; ++i)
				cin>>b[i];
			sort(a,a+n);
			sort(b,b+n);
			long long int ans=0;
			for(long long int i=0;i<n;i++)
				ans+=a[i]*b[n-i-1];
			cout<<ans<<endl;
		}
		else
			f=0;
	}
}