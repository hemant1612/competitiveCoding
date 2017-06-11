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
#include <cstring> //memset
#include <set>
#include <unordered_set>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
#define mii map<int,int>
#define sortv(v) sort(v.begin(),v.end());
ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use pow of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}

int bSearch(int low,int high,int a[],int sh)
{
	//function for searching till where is a sh<=
	while(low<high)
	{
		int mid=low+(high-low+1)/2;
		if(a[mid]>sh)
			high=mid-1;
		if(a[mid]<=sh)
			low=mid;
	}
	return low;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n];
	int b[k];
	int b1=0;
	REP(i,n) cin>>a[i];
	if(k>1)
		REP(i,k) cin>>b[k];
	else cin>>b1;
	if(k>1)
		cout<<"Yes"<<endl;
	else
	{
		REP(i,n)
		{
			if(a[i]==0)
				a[i]=b1;
		}
		int f=1;
		REP(i,n-1)
		{
			if(a[i]>a[i+1])
			{
				f=0;
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(f==1)
			cout<<"No"<<endl;
	}
}