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
typedef long long int lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define INF INT_MAX //Infinity
lli getValue(string s,int n)
{
	int copy=n;
	lli value=0.0;
	REP(i,copy)
	{
		if(s.at(i)=='1')
		{
			value+=n;
		}
		n--;
	}
	return value;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
	cin>>n>>t;
	string s="";
	REP(i,n)
		s=s+"0";
	lli max=0;
	string smax="";
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		l--;r--;
		string s1=s.substr(0,l);
		string s3=s.substr(r+1,n);
		string s2="";
		FOR(i,l,r)
		{
			if(s.at(i)=='0')
				s2+="1";
			else s2+="0";
		}
		s=s1+s2+s3;
		lli value=getValue(s,n);
		if(value>max)
		{
			smax=s;
			max=value;
		}
	}
	cout<<smax<<endl;
}
