#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
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
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<pair<int,int>>
#define viii vector<tuple<int,int,int>>
#define mii map<int,int>
#define nl "\n"
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
	int n;
	cin>>n;
	int a[n],b[n];
	REP(i,n) cin>>a[i];
	REP(i,n) cin>>b[i];
	mii m;
	int count=0;
	REP(i,n)
	{
		if(a[i]==b[i])
		{
			m[a[i]]=1;
		}
		else count++;
	}
	if(count==1)
	{
		string s="";
		int x=0;
		FOR(i,1,n)
		{
			if(m[i]!=1)
				x=i;
		}
		REP(i,n)
		{
			if(a[i]==b[i])
				s=s+to_string(a[i])+" ";
			else
				s=s+to_string(x)+" ";
		}
		cout<<s<<endl;
	}
	else
	{
		vi s1,s2;
		int x=0,y=0;
		int f=0;
		FOR(i,1,n)
		{
			if(m[i]!=1)
			{
				if(f==0)
				{
					x=i;
					f++;
				}
				else y=i;
			}
		}
		f=0;
		REP(i,n)
		{
			if(a[i]==b[i])
			{
				s1.pb(a[i]);
				s2.pb(a[i]);
			}
			else
			{
				if(f==0)
				{
					s1.pb(x);
					s2.pb(y);
					f++;
				}
				else
				{
					s1.pb(y);
					s2.pb(x);
				}
			}
		}
		int counter1=0,counter2=0,counter3=0,counter4=0;
		int i=0;
		REP(i,n)
		{
			if(a[i]==s1[i])
				counter1++;
			if(b[i]==s1[i])
				counter2++;
			if(a[i]==s2[i])
				counter3++;
			if(b[i]==s2[i])
				counter4++;
			
		}
		if(counter1==n-1&&counter2==n-1)
		{
			REP(i,n)
				cout<<s1[i]<<" ";
		}
		else 
		{
			REP(i,n)
				cout<<s2[i]<<" ";
		}
		cout<<nl;
	}
}