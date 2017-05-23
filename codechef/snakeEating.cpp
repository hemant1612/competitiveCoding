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
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		priority_queue<int> a;
		REP(i,n)
		{
			int x;
			cin>>x;
			a.push(x);
		}
		int k[q];
		REP(i,q)
			cin>>k[i];
		REP(i,q)
		{
			priority_queue<int> q;
			int counter=0;
			REP(j,n)
			{
				while(!a.empty())
				{
					int top=a.top();
					a.pop();
					if(top<k[i])
					{
						q.push(top);
						counter++;
					}
				}
			}
			cout<<endl;
			cout<<endl;
			while(!q.empty())
				{
					int top=q.top();
					q.pop();
				}
				cout<<endl;
				cout<<endl;
			int ans=n-counter;
			if(ans!=n)
			{
				while(counter>0)
				{
					int top=q.top();
					q.pop();
					int x=k[i]-top;
					counter--;
					if(x<=counter)
					{
						counter=counter-x;
						ans++;
					}
					else break;
				}
			}
			cout<<ans<<endl;
		}
	}
}