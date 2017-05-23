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
	string s;
	cin>>s;
	vector<int> v;
	REP(i,s.length())
	{
		char c=s.at(i);
		if(c!='+')
			v.push_back(c-'0');
	}
	sort(v.begin(),v.end());
	REP(i,v.size())
	{
		cout<<v[i];
		if(i!=v.size()-1)
			cout<<"+";
	}
	cout<<endl;
}