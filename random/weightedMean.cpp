#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip> //cout <<setprecision(1)<<fixed;
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	REP(i,n)
		cin>>a[i];
	REP(i,n)
		cin>>b[i];
	double mean=0.0;
	double de=0.0;
	REP(i,n)
	{
		mean+=a[i]*b[i];
		//cout<<mean<<" ";
		de+=b[i];
	}
	//cout<<endl;
	cout<<setprecision(1)<<fixed;
	cout<<mean/de<<endl;
}