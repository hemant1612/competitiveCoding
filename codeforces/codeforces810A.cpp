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
	int n,k;
	cin>>n>>k;
	double sum=0;
	REP(i,n)
	{
		int x;
		cin>>x;
		sum+=x;
	}
	if(sum/n<k-0.5)
		cout<<2*((k-0.5)*n-sum)<<endl;
	else
		cout<<"0"<<endl;
}