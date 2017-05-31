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
	int n,a;
	cin>>n>>a;
	int m[n];
	a--;
	REP(i,n)
		cin>>m[i];
	int i=a-1,j=a+1;
	int ans=0;
	//cout<<"ans0 "<<ans<<endl;
	if(m[a]==1)
		ans+=1;
	//cout<<"ans1 "<<ans<<endl;
	while(i>=0 && j<=n-1)
	{
		if(m[i]==1 && m[j]==1)
			ans+=2;
		//cout<<"ans2 "<<ans<<endl;
		i--;j++;
	}
	if(i==-1)
	{
		for(j;j<n;j++)
		{
			if(m[j]==1)
				ans++;
		}
	}
	//cout<<"ans3 "<<ans<<endl;
	if(j==n)
	{
		for(i;i>=0;i--)
		{
			if(m[i]==1)
				ans++;
		}
	}
	//cout<<"ans4 "<<ans<<endl;
	cout<<ans<<endl;
}