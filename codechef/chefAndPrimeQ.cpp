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
lli check[1000000];
void initialize(mii &m)
{
	for(int i=3;i<=1000;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                check[j]=1;
        }
    }
    m[2]=1;
    for(int i=3;i<=1000000;i+=2)
    {
        if(!check[i]){
			m[i]=1;
        }
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mii m;
	initialize(m);
	lli n;
	cin>>n;
	lli a[n];
	REP(i,n)	cin>>a[i];
	int t;
	cin>>t;
	while(t--)
	{
		lli l,r,x,y;
		cin>>l>>r>>x>>y;
		lli result=0;
		FOR(i,x,y)
		{
			if(m[i]==1)
			{
				FOR(j,l-1,r-1)
				{
					lli number=a[j];
					lli exponent=0;
					while(number%i==0)
					{
						exponent+=1;
						number/=i;
					}
					result+=exponent;
				}
			}
		}
		cout<<result<<endl;
	}
}