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
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	map<int,int> m;
	REP(i,n1+n2+n3)
	{
		int x;
		cin>>x;
		m[x]++;
	}
	int counter=0;
	vector<int> v;
	for(auto x : m)
	{
		if(x.second>=2)
		{
			counter++;
			v.push_back(x.first);
		}
	}
	cout<<counter<<endl;
	REP(i,v.size())
		cout<<v[i]<<endl;
}