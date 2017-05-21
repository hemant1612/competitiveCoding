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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<char> v;
		REP(i,n)
		{
			char c;
			cin>>c;
			if(c=='.')
				continue;
			else
				v.push_back(c);
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
		cout<<endl;
		if(v.size()%2!=0)
			cout<<"Invalid"<<endl;
		else
		{
			int f=1;
			if(v.size()!=0)
			{
				for(int i=0;i<v.size()-1;i+=2)
				{
					if(v[i]=='H'&&v[i+1]=='T')
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
					cout<<"Valid"<<endl;
				else cout<<"Invalid"<<endl;
			}
			else cout<<"Valid"<<endl;
		}
	}
}