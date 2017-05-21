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
	while(1)
	{
		double g,b;
		cin>>g>>b;
		if(g==-1&&b==-1)
			break;
		else
		{
			cout<<(int)ceil(max(g,b)/(min(g,b)+1))<<endl;
		}
	}
}