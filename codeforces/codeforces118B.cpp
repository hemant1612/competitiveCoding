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
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	FOR(i,0,n)
	{
		FOR(j,i,n-1)
		{
			cout<<"  ";
		}
		FOR(j,0,i)
			cout<<j<<" ";
		FORD(j,i-1,0)
		{
			if(j==0)
				cout<<j;
			else
				cout<<j<<" ";
		}
		cout<<endl;
	}
	FORD(i,n-1,0)
	{
		FOR(j,i,n-1)
		{
			cout<<"  ";
		}
		FOR(j,0,i)
			cout<<j<<" ";
		FORD(j,i-1,0)
		{
			if(j==0)
				cout<<j;
			else
				cout<<j<<" ";
		}
		cout<<endl;
	}
}