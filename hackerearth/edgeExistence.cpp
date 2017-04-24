#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<int> v[1000];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int f=0;
		for(int i=0;i<v[a].size();i++)
		{
			if(v[a][i]==b)
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}