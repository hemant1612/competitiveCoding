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
	int n,t;
	cin>>n>>t;
	char a[n];
	REP(i,n)
		cin>>a[i];
	while(t--)
	{
		REP(i,n-1)
		{
			if(a[i]=='B'&&a[i+1]=='G')
			{
				a[i]='G';
				a[i+1]='B';
				i++;
			}
		}
	}
	REP(i,n)
		cout<<a[i];
	cout<<endl;
}