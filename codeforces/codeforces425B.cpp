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
	string good;
	cin>>good;
	string pattern;
	cin>>pattern;
	lli q;
	cin>>q;
	map<char,int> m;
	REP(i,len(good))
	{
		m[good.at(i)]=1;
	}
	int check=0;
	int index=0;
	REP(i,len(pattern))
	{
		if(pattern.at(i)=='*')
		{
			check=1;
			index=i;
		}
	}
	while(q--)
	{
		string s;
		cin>>s;
		if(check==0)
		{
			if(len(s)!=len(pattern))
				cout<<"NO"<<endl;
			else
			{
				int f=1;
				REP(i,len(s))
				{
					char c1=s.at(i);
					char c2=pattern.at(i);
					if(c2!='?')
					{
						if(c1!=c2)
						{
							f=0;
							break;
						}
					}
					else
					{
						if(m[c1]!=1)
						{
							f=0;
							break;
						}
					}
				}
				if(f) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
		}
		else
		{
			int left=index;
			int right=len(pattern)-index-1;
			//whatIs(left)
			//whatIs(right)
			//kbdfksnf
			int f=1;
			int counter1=0;
			int stringpointer1=0;
			int patternpointer1=0;
			while(counter1<left&&stringpointer1!=len(s))
			{
				char c1=s.at(stringpointer1);
				char c2=pattern.at(patternpointer1);
				if(c2!='?')
				{
					if(c1!=c2)
					{
						f=0;
					break;
					}
				}
				else
				{
					if(m[c1]!=1)
						{
							f=0;
							break;
						}
					}
					counter1++;
					
						stringpointer1++;
					f=0;
						break;
					
					patternpointer1++;
			}
			if(counter1==left)
			{
				if(stringpointer1==len(s))
					f=0;
			}
			//reached
				if(f==0) cout<<"NO1"<<endl;
				else
				{
					int stringpointer=len(s)-1;
					int patternpointer=len(pattern)-1;
					int counter=0;
					while(counter<right)
					{
						char c1=s.at(stringpointer);
						char c2=pattern.at(patternpointer);
						if(c2!='?')
						{
							if(c1!=c2)
							{
								f=0;
								break;
							}
						}
						else
						{
							if(m[c1]!=1)
							{
								f=0;
								break;
							}
						}
						counter++;
						stringpointer--;
						patternpointer--;
					}
					if(f==0) cout<<"NO"<<endl;
					else
					{
						string check=s.substr(index,len(s)-left-right);
						//whatIs(check)
						REP(i,len(check))
						{
							char c=check.at(i);
							if(m[c]==1)
							{
								f=0;
								break;
							}
						}
						if(f==0) cout<<"NO"<<endl;
						else cout<<"YES"<<endl;
					}
				}
		
		}
	}
	return 0;
}