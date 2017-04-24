#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout <<setprecision(1)<<fixed;
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double ans=0;
		double fact=1.0;
		FOR(i,1,n-1)
		{
			ans+=1.0/fact;
			fact*=i+1;
			cout<<ans<<endl;
		}
		
	}
}