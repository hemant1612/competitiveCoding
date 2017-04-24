#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <numeric> //accumulate for vector
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	string s;
	cin>>s;
	//sort(s.begin(),s.end());
	string ans="Yes";
	for(int i=0;i<s.length()-1;i++)
	{
		if(s.at(i)==s.at(i+1))
		{
			ans="No";
			cout<<i<<" "<<s.at(i)<<" "<<s.at(i+1)<<endl;
			break;
		}
		else if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='o' || s.at(i)=='i' || s.at(i)=='u' || s.at(i)=='y')
		{
			if(s.at(i+1)=='a' || s.at(i+1)=='e' || s.at(i+1)=='o' || s.at(i+1)=='i' || s.at(i+1)=='u' || s.at(i+1)=='y')
			{
				ans="No";
				cout<<i<<" "<<s.at(i)<<" "<<s.at(i+1)<<endl;
				break;
			}
		}
	}
	cout<<ans<<endl;
}