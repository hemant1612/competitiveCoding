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
	lli x1,x2,xc,X,Y,y1,y2,yc;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>xc>>yc;
	X=x2-x1;
	Y=y2-y1;
	lli Xc=xc-x1;
	lli Yc=yc-y1;
	lli H=0,V=0,D=0;
	if(Xc>X-Xc)
		H=X-Xc;
	else H=Xc;
	if(Yc>Y-Yc)
		V=Y-Yc;
	else V=Yc;
	D=V*H*2;
	cout<<H+D+V<<endl;
}