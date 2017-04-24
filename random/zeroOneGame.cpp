#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
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
		vector<int> v;
		int j=0;
		int ans=1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			if(j>1)
			{	
				if(v[j-2]==0&&v[j]==0)
				{
					v.erase(v.begin()+(j-1));
					ans++;
					j--;
				}
			}
			j++;
			/*cout<<"j "<<j<<endl;
			for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
			cout<<endl;*/
		}
		//cout<<ans<<" ans"<<endl;
		int f=1;
		while(f==1)
		{
			int flag=1;
			for(int i=1;i<v.size()-1;i++)
			{
				if(v[i-1]==0&&v[i+1]==0)
				{
					v.erase(v.begin()+i);
					ans++;
					i=i-1;
					flag=0;
				}
			}
			if(flag==1)
			{
				f=0;
				break;
			}
		}
		//cout<<ans<<" ans"<<endl;
		
		if(ans&1)
			cout<<"Bob"<<endl;
		else cout<<"Alice"<<endl;
	}
}