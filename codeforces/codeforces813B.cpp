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
typedef unsigned long long int ulli;
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
#define mii map<int,int>
ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use power of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}
void func(lli x,lli y,vector<lli> &v,lli l,lli r)
{
	int i=0,j=0;
	while(poW(x,i)<=1e18)
	{
		while(poW(x,i)+poW(y,j)<=1e18)
		{
			v.pb(poW(x,i)+poW(y,j));
			j++;
		}
		j=0;
		i++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<lli> v;
	int x,y,l,r;
	cin>>x>>y>>l>>r;
	func(x,y,v,l,r);
	sort(v.begin(),v.end());
	lli ans=v[0]-l;
	FOR(i,1,v.size()-1)
	{
		if(v[i]-v[i-1]==0)
			continue;
		else if(v[i]-v[i-1]==1)
			continue;
		else if(v[i]-v[i-1]-1>ans)
			ans=v[i]-v[i-1]-1;
	}
	if(r-v[v.size()-1]>ans)
		ans=r-v[v.size()-1];
	cout<<ans<<endl;
}