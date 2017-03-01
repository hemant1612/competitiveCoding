#include <iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{ 
		cout<<endl;
		long long int n;
		cin>>n;
		long long int *m;
		m=new long long int[n];
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			long long int p;
			cin>>p;
			sum+=p;
			if(sum>=n)
				sum=sum%n;
		}
		if(sum%n==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}