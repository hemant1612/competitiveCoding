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
	int f=1;
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)==' ')
		{
			if(s.at(i-1)!=s.at(i+1))
			{
				f=0;
				break;
			}
		}
	}
	if(f==1)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}