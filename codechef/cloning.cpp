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
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int m[n];
		arrayin(m,n);
		REP(i,q)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			a--;b--;c--;d--;
			multiset<int> s1;
			multiset<int> s2;
			FOR(i,a,b)
			{
				s1.insert(m[i]);
				s2.insert(m[i+c-a]);
			}
			set<int>::iterator it1=s1.begin();
			int counter=0;
			for(set<int>::iterator it2=s2.begin();it2!=s2.end();it2++,it1++)
			{
				if(*it1==*it2)
					counter++;
			}
			if(counter==d-c||counter==d-c+1)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}