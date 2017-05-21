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
	double n,k;
	cin>>n>>k;
	double sum=0;
	REP(i,n)
	{
		double p;
		cin>>p;
		sum+=p;
	}
	float x=(k*n-0.5*n-sum)*2;
	cout<<(int)(ceil(x))<<endl;
}