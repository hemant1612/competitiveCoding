#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <numeric> 
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int bSearch(vector<int> a, int workers)
{
	int n=a.size();
	int high=accumulate(a.begin(),a.end(),0);
	int low=max_element(a.begin(),a.end());
	while(low<high)
	{
		int mid=low+(high-low)/2;
		int required=1,cL=0;
		for(int i=0;i<n;i++)
		{
			if(cL+a[i]<=mid)
				cL+=a[i];
			else
			{
				required++;
				cL=a[i];
			}
		}
		if(required<=workers)
			high=mid;
		else low=mid+1;
	}
	return low;
}
int main()
{
	int n;
	cin>>n;
	vector<int> a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int workers;
	cin>>workers;
	int ans=bSearch(a,workers);
	cout<<ans<<endl;
}