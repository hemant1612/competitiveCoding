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
	int t;
	cin>>t;
	map <string,set<int>> m;
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="crt")
		{
			string s1;
			cin>>s1;
			if(m[s1].size()==0)
			{
				m[s1].insert(0);
				cout<<"+ "<<s1<<endl;
			}
			else
			{
				int i=0;
				while()
				{

				}
			}
		}
		else
		{
			string s2,s3;
			cin>>s2>>s3;
			cout<<s2<<" "<<s3<<endl;
		}
	}
}