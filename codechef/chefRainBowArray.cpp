#include <bits/stdc++.h>
 
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define whatIs(x) cout<<#x<<" is "<<x<<endl;
#define fillA(a,value) memset(a,value,sizeof(a));
#define len(s) s.length()
#define reached cout<<"reached "<<endl;
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
#define msi multiset<int>
#define nl "\n"
#define sii set<int,int>
#define sz size
 
typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;
 
using namespace std;
 
int main()
{
	fio;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		REP(i,n) cin>>a[i];
		int i=0,j=n-1;
		int f=1,previous=1;
		int one=0,two=0,three=0,four=0,five=0,six=0,seven=0;
		while(i<=j)
		{
			if(a[i]!=a[j])
			{
				f=0;
				break;
			}
			else
			{
				if(a[i]>7)
				{
					f=0;
					break;
				}
				if(i==0)
				{
					if(a[i]!=1)
					{
						f=0;
						break;
					}
					else
					{
						one++;
					}
				}
				else
				{
					if(a[i]==previous||a[i]==(previous+1))
					{
						previous=a[i];
						if(a[i]==1)
							one++;
						else if(a[i]==2)
							two++;
						else if(a[i]==3)
							three++;
						else if(a[i]==4)
							four++;
						else if(a[i]==5)
							five++;
						else if(a[i]==6)
							six++;
						else if(a[i]==7)
							seven++;
					}
					else
					{
						f=0;
						break;
					}
				}
			}
			i++;
			j--;
		}
		if(f==0) cout<<"no"<<endl;
		else
		{
			if(one==0||two==0||three==0||four==0||five==0||six==0||seven==0)
				cout<<"no"<<endl;
			else cout<<"yes"<<endl;
		}
	}
 
	return 0;
} 