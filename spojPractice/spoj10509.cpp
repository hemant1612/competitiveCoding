#include <iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ans=n*(n+1)+(n-1)*(n)/2;
		cout<<(ans%1000007)<<endl;
	}
}