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
#include <cstring> //memset
#include <set>
#include <unordered_set>
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
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
		lli positive=0,negative=0,sump=0,sumn=0;
		vi v;
		REP(i,n)
		{
			lli x;
			cin>>x;
			if(x>=0)
			{
				sump+=x;
				positive++;
			}
			else if(x<0)
			{
				sumn+=x;
				negative++;
				v.pb(x);
			}
		}
		sort(v.begin(),v.end());
		lli max=positive*sump+sumn;
		lli sz=v.size();
		FORD(i,sz-1,0)
		{
			positive++;
			//cout<<"max >"<<max<<" "<<positive*(sump+v[i])+(sumn-v[i])<<endl;
			if(positive*(sump+v[i])+(sumn-v[i])>max)
				max=positive*(sump+v[i])+(sumn-v[i]);
			sumn=sumn-v[i];
			sump+=v[i];
		}
		cout<<max<<endl;
	}
}