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
	int n;
	cin>>n;
	vector<int> v;
	REP(i,n)
	{
		int x,y;
		cin>>x>>y;
		if(x>y)
			v.push_back(y);
		else v.push_back(x);
	}
	sort(v.begin(),v.end());
	REP(i,v.size()-1)
	{
		if(v[i]==v[i+1])
		{
			v.erase(v.begin()+i);
			i--;
		}
	}
	cout<<v.size()<<endl;
}