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
	string s;
	cin>>s;
	int count=1;
	int ans=0;
	FOR(i,1,s.length()-1)
	{
		if(s.at(i)==s.at(i-1))
		{
			count++;
			if(count>=7)
			{
				cout<<"YES"<<endl;
				ans=1;
				break;
			}
		}
		else count=1;
	}
	if(ans==0)
		cout<<"NO"<<endl;
}