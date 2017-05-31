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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	int len=s.length();
	int f=0;
	REP(i,len)
	{
		if(s.at(i)=='H'||s.at(i)=='Q'||s.at(i)=='9')
		{
			f=1;
			cout<<"YES"<<endl;
			break;
		}
	}
	if(f==0)
		cout<<"NO"<<endl;
}