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
	int a,b;
	cin>>a>>b;
	int i=1;
	while(1)
	{
		if(i%2==1)
		{
			if(a-i>=0)
			{
				a=a-i;
				i++;
			}
			else
			{
				cout<<"Vladik\n";
				break;
			}
		}
		else
		{
			if(b-i>=0)
			{
				b=b-i;
				i++;
			}
			else
			{
				cout<<"Valera\n";
				break;
			}
		}
	}
}