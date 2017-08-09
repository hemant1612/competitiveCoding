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
#define msi multiset<int>
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int main()
{
	fio;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		msi ms;
		int a[n];
		REP(i,n)
		{
			scanf("%d",&a[i]);
			ms.insert(a[i]);
		}
		int max=-1;
		REP(i,n-1)
		{
			int x=a[i];
			//cout<<"x "<<x<<endl;
			ms.erase(ms.find(x));
			auto it=ms.rbegin();
			//cout<<"ladst "<<*it<<endl;
			if(*it-x>max)
				max=*it-x;
		}
		//cout<<"Reached"<<endl;
		if(max>0)
			printf("%d\n",max);
		else printf("UNFIT\n");
	}

	return 0;
}