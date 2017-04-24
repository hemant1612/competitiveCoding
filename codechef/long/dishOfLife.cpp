#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k];
		REP(i,k)
		{
			a[i]=0;
		}
		int f=0;
		string ans="";
		FOR(i,1,n)
		{
			int d;
			cin>>d;
			FOR(j,1,d)
			{
				int x;
				cin>>x;
				a[x-1]++;
			}
			int flag=1;
			REP(j,k)
			{
				if(a[j]==0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				if(i==n)
					ans="all";
				else 
				{
					f=1;
					ans="some";
				}
			}
			else
			{
				if(i==n)
					ans="sad";
			}
		}
		if(f!=1)
			cout<<ans<<endl;
		else cout<<"some"<<endl;
	}
}