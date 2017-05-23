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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#include <climits>
#define INF INT_MAX //Infinity

int main()
{
	int n;
	cin>>n;
	vector<pair<lli,int>>v;
	REP(i,n)
	{
		lli x;
		cin>>x;
		v.push_back(make_pair(x,i));
	}
	sort(v.begin(),v.end());
	int min=INF;
	REP(i,n-1)
	{
		if(v[i].second>v[i+1].second && v[i+1].first-v[i].first<min)
		{
			min=v[i+1].first-v[i].first;
		}
	}
	cout<<min<<endl;
}