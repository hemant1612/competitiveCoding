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
		int n;
		cin>>n;
		int a[n];
		REP(i,n)
			cin>>a[i];
		if(n%2==0)
			cout<<"no"<<endl;
		else
		{
			if(a[0]!=1)
				cout<<"no"<<endl;
			else
			{
				int f=1;
				for(int i=0;i<n/2;i++)
				{
					if((a[i]-a[i+1])!=-1)
					{
						f=0;
						break;
					}
				}
				if(f==0)
				{
					cout<<"no"<<endl;
				}
				else
				{
					for(int i=n/2;i<n-1;i++)
					{
						if((a[i]-a[i+1])!=1)
						{
							f=0;
							break;
						}
					}
					if(f==0)
					{
						cout<<"no"<<endl;
					}
					else
						cout<<"yes"<<endl;
				}
			}
		}
	}
}