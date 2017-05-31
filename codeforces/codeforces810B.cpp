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
	lli n,f;
	cin>>n>>f;
	vector<tuple<int,int,int>>v;
	REP(i,n)
	{
		lli x,y;
		cin>>x>>y;
		v.push_back(make_tuple(x-y,x,y));
	}
	sort(v.begin(),v.end());
	/*for(auto i : v2)
		cout<<get<0>(i)<<" "<<get<1>(i)<<" "<<get<2>(i)<<endl;*/
	int ans=0;
	for(auto i : v)
	{
		if(get<0>(i)<0)
		{
			if(f>0 && get<1>(i)>0)
			{
				int x=(get<1>(i))*2;
				ans+=min(x,get<2>(i));
				f--;
			}
			else ans+=min(get<1>(i),get<2>(i));
		}
		else ans+=min(get<1>(i),get<2>(i));
	}
	cout<<ans<<endl;
}