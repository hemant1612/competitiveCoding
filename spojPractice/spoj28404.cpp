#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define si set<int>
#define si64 set<lli>

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

lli bSearch1(lli low,lli high,vi64 v,lli sh)
{
	while(low<high)
	{
		lli mid=(low+high+1)/2;
		if(v[mid]<=sh)
			low=mid;
		else high=mid-1;
	}
	return low;
}

lli bSearch2(lli low,lli high,vi64 v,lli size)
{
	while(low<high)
	{
		lli mid=(low+high+1)/2;
		int f=0;
		REP(i,size-1)
		{
			if(v[i+1]-v[i]>=mid)
			{
				f=1;
				break;
			}
		}
		if(f)
			low=mid;
		else high=mid-1;
	}
	return low;
}
int main()
{
	fio;
	lli n,m,q;
	cin>>n>>m>>q;
	si64 width,height;
	width.insert(0);
	width.insert(m);
	height.insert(0);
	height.insert(n);
	lli heightS=2;
	lli widthS=2;
	lli x=m,y=n;
	while(q--)
	{
		char choice;
		int axis;
		cin>>choice>>axis;
		if(choice=='V')
		{
			if(height.find(axis)==heightSet.end())
			{
				height.insert(axis);
				auto it=height.upper_bound(axis);
				cout<<it<<endl;
				//height.insert(height.begin()+pointer+1,axis);
				//heightS++;
			}
			//y=bSearch2(0,n,height,heightS);
			//cout<<x*y<<endl;
		}
		else
		{
			if(width.find(axis)==width.end())
			{
				width.insert(axis);
				auto it=width.upper_bound(axis);
				cout<<it<<endl;
				//width.insert(width.begin()+pointer+1,axis);
				//widthS++;
			}
			//x=bSearch2(0,m,width,widthS);
			//cout<<x*y<<endl;
		}
	}
}