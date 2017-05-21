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
	int n;
	cin>>n;
	int r=0,c=0;
	REP(i,n)
	{
		string s;
		cin>>s;
		REP(j,s.length())
		{
			char x=s.at(j);
			if(x!='0'&&x!=' ')
			{
				r=i;
				c=j;
				cout<<r<<","<<c<<endl;
			}
		}
	}
	cout<<r<<","<<c<<endl;
}