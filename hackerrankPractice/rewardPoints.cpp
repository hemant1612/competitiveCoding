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
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	if(a<=10)
		sum+=a*10;
	else sum+=100;
	if(b<=10)
		sum+=b*10;
	else sum+=100;
	if(c<=10)
		sum+=c*10;
	else sum+=100;
	cout<<sum<<endl;
}