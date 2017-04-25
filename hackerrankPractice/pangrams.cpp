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
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	string s="";
	getline(cin,s);
	int a[26];
	REP(i,26)
		a[i]=0;
	REP(i,s.length())
	{
		char c=s.at(i);
		a[(int)tolower(c)-97]=1;
	}
	int f=1;
	REP(i,26)
	{
		if(a[i]!=1)
		{
			cout<<"not pangram"<<endl;
			f=0;
			break;
		}
	}
	if(f==1)
		cout<<"pangram"<<endl;
}