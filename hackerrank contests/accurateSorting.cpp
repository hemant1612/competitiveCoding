#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <numeric> //accumulate for vector
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
		int b[n];
		REP(i,n)
		{
			int x;
			cin>>x;
			a[i]=x;
			b[i]=x;
		}
		sort(b,b+n);
		int counter=n-1;
		int f=1;
		REP(i,n)
		{
			if(a[i]>a[i+1])
			{
				if(abs(a[i]-a[i+1])==1)
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
		}
		REP(i,n)
		{
			if(a[i]!=b[i])
			{
				f=0;
				break;
			}
		}
		if(f==1)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}