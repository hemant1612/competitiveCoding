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
		vector<int> a;
		REP(i,n)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		int k[q];
		REP(i,q)
			cin>>k[i];
		sort(a.begin(),a.end());
		REP(i,q)
		{
			int counter=0;
			int pointer=-1;
			REP(j,n)
			{
				if(a[j]<k[i])
					counter++;
				else
				{
					pointer=j;
					break;
				}
			}
			pointer--;
			int ans=n-counter;
			if(ans!=n)
			{
				int temp=a[pointer];
				while(counter>0)
				{

					int diff=k[i]-temp;
					if(diff<=counter-1)
					{
						counter--;
						temp++;
						if(temp==k[i])
						{
							pointer--;
							temp=a[pointer];
							counter--;
							ans++;
						}
					}
					else break;
				}
			}
			cout<<ans<<endl;
		}
	}
}