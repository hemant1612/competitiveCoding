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
	int n;
	cin>>n;
	int n1=0,n2=0,n3=0,n4=0;
	REP(i,n)
	{
		int x;
		cin>>x;
		if(x==1)
			n1++;
		else if(x==2)
			n2++;
		else if(x==3)
			n3++;
		else n4++;
	}
	int ans=0;
	ans+=n4;
	if(n3>n1 && n1!=0 && n3!=0)
	{
		ans+=n1;
		n3=n3-n1;
		n1=0;
		ans+=n3;
	}
	else if(n1>n3 && n1!=0 && n3!=0)
	{
		ans+=n3;
		n1=n1-n3;
		n3=0;
	}
	else if(n1==n3 && n1!=0 && n3!=0)
	{
		ans+=n3;
		n3=0;
		n1=0;
	}
	ans+=n2/2;
	n2=n2%2;
	if(n2==0)
	{
		ans+=n1/4;
		n1=n1%4;
		if(n1!=0)
			ans++;
	}
	else if(n2!=0)
	{
		if(n1>=2)
		{
			ans++;
			n1=n1-2;
			ans+=n1/4;
			n1=n1%4;
			if(n1!=0)
				ans++;
		}
		else if(n1<2)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}