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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	lli length=s.length();
	lli counter=0;
	REP(i,length)
	{
		if(s.at(i)=='4'||s.at(i)=='7')
			counter++;
	}
	string s1=to_string(counter);
	int length1=s1.length();
	int f=1;
	REP(i,length1)
	{
		if(s1.at(i)=='4'||s1.at(i)=='7')
		{
			continue;
		}
		else
		{
			f=0;
			break;
		}
	}
	if(f==1)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}