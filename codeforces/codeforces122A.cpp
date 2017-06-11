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
	int n;
	cin>>n;
	int flag=0;
	FOR(i,1,n)
	{
		if(n%i==0)
		{
			string s=to_string(i);
			int f=1;
			REP(j,s.length())
			{
				if(s.at(j)=='7'||s.at(j)=='4')
					continue;
				else 
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
	}
	if(!flag)
		cout<<"NO"<<endl;
}
