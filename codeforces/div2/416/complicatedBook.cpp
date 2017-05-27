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
	int n,m;
	cin>>n>>m;
	int a[n];
	REP(i,n)
		cin>>a[i];
	while(m--)
	{
		int l,r,x;
		cin>>l>>r>>x;
		l--;r--;x--;
		int counter=0;
		FOR(i,l,r)
		{
			if(a[i]<a[x])
				counter++;
		}
		if(l+counter==x)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}