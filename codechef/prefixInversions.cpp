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
	string s;
	cin>>s;
	int counter=0;
	int ans=0;
	FORD(i,s.length()-1,0)
	{
		char c=s.at(i);
		if(counter%2==0)
		{
			if(c=='1')
			{
				ans++;
				counter++;
			}
		}
		else
		{
			if(c=='0')
			{
				ans++;
				counter++;
			}
		}
	}
	cout<<ans<<endl;
}