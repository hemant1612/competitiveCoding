#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout<<setprecision(1)<<fixed;
#include <climits> //limits like Infinity
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a;
		REP(i,n)
		{
			lli x;
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		lli ans=0;
		if(n%2==1)
		{
			lli v=1;
			for(int i=0;i<n-1;i+=2)
			{
				if(a[i]>v)
					ans+=a[i]-v;
				if(a[i+1]>v)
					ans+=a[i+1]-v;
				v++;
			}
			ans+=a[n-1]-v;
			cout<<ans<<endl;
		}
		else
		{
			ans+=a[0];
			a.erase(a.begin());
			lli v=1;
			for(int i=0;i<n-2;i+=2)
			{
				if(a[i]>v)
					ans+=a[i]-v;
				if(a[i+1]>v)
					ans+=a[i+1]-v;
				v++;
			}
			ans+=a[n-2]-v;
			cout<<ans<<endl;
		}
	}
}