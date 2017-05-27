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
	string s;
	cin>>s;
	lli k,b,m;
	cin>>k>>b>>m;
	lli length=s.length();
	lli ans=0;
	FOR(i,0,length-k)
	{
		string s1=s.substr(i,k);
		lli p=0;
		lli value=0;
		FORD(j,k-1,0)
		{
			lli x=(s1.at(j)-'0')*pow(b,p);
			p++;
			value+=x;
		}
		ans+=value%m;
	}
	cout<<ans<<endl;
}