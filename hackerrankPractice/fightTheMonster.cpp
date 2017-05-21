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
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int n,hit,t;
	cin>>n>>hit>>t;
	int a[n];
	REP(i,n)
		cin>>a[i];
	sort(a,a+n);
	int counter=0,sum=0;
	int i=0;
	while(t--)
	{
		if(a[i]>0)
		{
			a[i]-=hit;
			if(a[i]<=0)
				counter++;
		}
		else 
		{
			i++;
			t++;
		}
	}
	cout<<counter<<endl;
}