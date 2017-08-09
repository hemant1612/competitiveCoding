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
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n,m;
	cin>>n>>m;
	char a[n][m];
	REP(i,n)
	{
		REP(j,m) cin>>a[i][j];
	}
	int rowR=0,rowB=0,rowG=0,colR=0,colG=0,colB=0,visitedG=0,visitedR=0,visitedB=0;
	char previous;
	int f=1;
	REP(i,n)
	{
		int flag=1;
		char current=a[i][0];
		
		REP(j,m)
		{
			if(a[i][j]!=current)
			{
				flag=0;
				break;
			}
		}
		
		if(flag==0)
		{
			f=0;
			break;
		}
		else
		{
			if(current=='R')
			{
				if(visitedR==1)
				{
					if(previous==current)
					{
						rowR++;
					}
					else
					{
						f=0;
						break;
					}
				}
				else
				{
					visitedR=1;
					rowR++;
				}
				
			}
			if(current=='G')
			{
				if(visitedG==1)
				{
					if(previous==current)
					{
						rowG++;
					}
					else
					{
						f=0;
						break;
					}
				}
				else
				{
					visitedG=1;
					rowG++;
				}
				
			}
			if(current=='B')
			{
				if(visitedB==1)
				{
					if(previous==current)
					{
						rowB++;
					}
					else
					{
						f=0;
						break;
					}
				}
				else
				{
					visitedB=1;
					rowB++;
				}
				
			}
		}
		previous=current;
	}
	
	if(f)
	{
		
		if(rowR==rowB&&rowB==rowG) cout<<"YES"<<endl;
		else
		{
			f=1;
			visitedB=0,visitedR=0,visitedG=0;
			REP(j,m)
			{
				int flag=1;
				char current=a[0][j];
				REP(i,n)
				{
					if(a[i][j]!=current)
					{
						flag=0;
						break;
					}
				}
				if(flag==0)
				{
					f=0;
					break;
				}
				else
				{
					if(current=='R')
					{
						if(visitedR==1)
						{
							if(previous==current)
							{
								colR++;
							}
							else
							{
								f=0;
								break;
							}
						}
						else
						{
							visitedR=1;
							colR++;
						}
					}
					if(current=='G')
					{
						if(visitedG==1)
						{
							if(previous==current)
							{
								colG++;
							}
							else
							{
								f=0;
								break;
							}
						}
						else
						{
							visitedG=1;
							colG++;
						}
					}
					if(current=='B')
					{
						if(visitedB==1)
						{
							if(previous==current)
							{
								colB++;
							}
							else
							{
								f=0;
								break;
							}
						}
						else
						{
							visitedB=1;
							colB++;
						}
					}
				}
				previous=current;
			}
			if(f)
			{
				if(colB==colG&&colG==colR) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else cout<<"NO"<<endl;
		}
	}
	else
	{
		f=1;
		REP(j,m)
		{
			int flag=1;
			char current=a[0][j];
			REP(i,n)
			{
				if(a[i][j]!=current)
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
			{
				f=0;
				break;
			}
			else
			{
				if(current=='R') colR++;
				if(current=='G') colG++;
				if(current=='B') colB++;
			}
		}
		//whatIs(f)
		if(f)
		{
			if(colB==colG&&colG==colR) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
		return 0;
}