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
#define reached cout<<"reached "<<endl;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

lli freq1[1000001]={0};
lli freq2[1000001]={0};

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
	int n;
	cin>>n;
	lli a[n],b[n];
	REP(i,n)
	{
		lli x;
		cin>>x;
		a[i]=x;
		freq1[x]+=1;
	}
	REP(i,n)
	{
		lli x;
		cin>>x;
		b[i]=x;
		freq2[x]+=1;
	}
	sorta(a,n);
	sorta(b,n);
	lli max1=a[n-1],max2=b[n-1];
	lli pointer1=n-1,pointer2=n-1;
	lli array=0,f=0;
	lli current=0,other=0;
    lli sum=0;
    lli gcd=1;
	FORD(i,max(max1,max2),1)
	{
		whatIs(i)
		//whatIs(pointer1)
		//whatIs(pointer2)
		if(i==1&&f==0)
		{
			sum=a[n-1]+b[n-1];
			break;
		}
		if(pointer1>=0&&a[pointer1]%i==0)
		{
			array=2;
		}
		else if(pointer2>=0&&b[pointer2]%i==0)
		{
			current=b[pointer2];
			pointer2--;
			array=1;
		}
		else continue;
		//whatIs(array);

		lli count=0,j=i;
		while(j<=max2)
		{
			if(freq2[j]>0)
			{
				count+=freq2[j];
				other=j;
			}
			j+=i;
		}
		if(count>0)
		{
			if(i>=gcd)
			{
				f=1;
				gcd=i;
				if(current+other>=sum)
					sum=current+other;
				//whatIs(sum)
			}
			else break;
		}
		while(j<=max1)
		{
			if(freq1[j]>0)
			{
				count+=freq1[j];
				other=j;
			}
			j+=i;
		}
		if(count>0)
		{
			if(i>=gcd)
			{
				f=1;
				gcd=i;
				if(current+other>=sum)
					sum=current+other;
				//whatIs(sum)
			}
			else break;
		}
		whatIs(sum)
		//whatIs(f)
	}
	cout<<sum<<endl;
	return 0;
}