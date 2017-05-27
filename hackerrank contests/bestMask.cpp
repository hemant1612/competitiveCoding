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
	lli n;
	cin>>n;
	lli a[n];
	REP(i,n)
		cin>>a[i];
	lli i=1;
	int p=1;
	while(1)
	{
		priority_queue<int> q;
		int flag=0;
		while(i>=pow(2,p-1)&&i<pow(2,p))
		{
			int f=1;
			REP(j,n)
			{
				if((a[j]&i)==0)
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				q.push(-1*i);
				flag=1;
			}
			i++;
		}
		if(flag==1)
		{
			cout<<-1*q.top()<<"\n";
			break;
		}
		else p++;
	}
}