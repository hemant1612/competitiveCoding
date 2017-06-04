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
	int a[n];
	vi positive;
	vi zero;
	vi negative;
	REP(i,n)
	{
		int x;
		cin>>x;
		if(x>0)
			positive.pb(x);
		else if (x==0)
			zero.pb(x);
		else negative.pb(x);
	}
	if(negative.size()%2==0)
	{
		cout<<negative.size()-1<<" ";
		REP(i,negative.size()-1)
			cout<<negative[i]<<" ";
		cout<<endl;
		cout<<positive.size()<<" ";
		REP(i,positive.size())
			cout<<positive[i]<<" ";
		cout<<endl;
		cout<<zero.size()+1<<" ";
		REP(i,zero.size())
			cout<<zero[i]<<" ";
		cout<<negative[negative.size()-1]<<endl;
	}
	else if(!positive.size())
	{
		cout<<negative.size()-2<<" ";
		REP(i,negative.size()-2)
			cout<<negative[i]<<" ";
		cout<<endl;
		cout<<"2 "<<negative[negative.size()-2]<<" "<<negative[negative.size()-1]<<endl;
		cout<<zero.size()<<" "<<"0"<<endl;
	}
	else
	{
		cout<<negative.size()<<" ";
		REP(i,negative.size())
			cout<<negative[i]<<" ";
		cout<<endl;
		cout<<positive.size()<<" ";
		REP(i,positive.size())
			cout<<positive[i]<<" ";
		cout<<endl;
		cout<<zero.size()<<" "<<"0"<<endl;
	}
}