#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		lli b;
		cin>>a>>b;
		if(a==0) cout<<"0"<<endl;
		else
		{
			if(b==0) cout<<"1"<<endl;
			else
			{
				b=b%4;
				if(b==0) b=4;
				lli ans=1;
				FOR(i,1,b)
				{
					ans*=a;
				}
				cout<<ans%10<<endl;
			}
		}
	}

	return 0;
}