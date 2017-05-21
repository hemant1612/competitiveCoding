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
	while(1)
	{
		int a,d;
		cin>>a>>d;
		if(a==0&d==0)
			break;
		else
		{
			int attack[a];
			int defend[d];
			REP(i,a)
				cin>>attack[i];
			REP(i,d)
				cin>>defend[i];
			sort(attack,attack+a);
			sort(defend,defend+d);
			if(attack[0]<defend[1])
				cout<<"Y"<<endl;
			else cout<<"N"<<endl;
		}
	}
}