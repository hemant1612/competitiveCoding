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
	lli n,q;
	cin>>n>>q;
	lli a[n];
	REP(i,n)
		cin>>a[i];
	lli b[q];
	REP(i,q)
	{
		lli type;
		cin>>type;
		if(type==1)
		{
			lli l,r,value;
			cin>>l>>r>>value;
			l--;
			r--;
			FOR(j,l,r)
				a[j]=value;
		}
		else
		{
			lli l,r;
			cin>>l>>r;
			l--;
			r--;
			lli ans=0;
			lli prod=1;
			for(int j=l;j<=r;j++)
				prod*=a[j];
			for(int j=l;j<=r;j++)
				ans+=prod/a[j];
			cout<<(ans-1)%1000000007<<endl;
		}
	}

}