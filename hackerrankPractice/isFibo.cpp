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
typedef long long lli;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
vector<lli> v;
void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(long long int F[2][2],int n)
{
	if(n==0||n==1)
		return;
	long long int M[2][2]={{1,1},{1,0}};

	power(F,n/2);
	multiply(F,F);
	if(n%2!=0)
		multiply(F,M);
}

long long int fib(long long int n)
{
	long long int F[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power(F,n-1);
	return F[0][0];
}
int bSearch(lli low,lli high,lli sh)
{
	while(low<=high)
	{
		lli mid=low+(high-low)/2;
		if(v[mid]==sh)
			return 1;
		else if(v[mid]>sh)
			high=mid-1;
		else low=mid+1;
	}
	return 0;
}
int main()
{
	for(lli i=0;i<=10000000000;i++)
	{
		v.push_back(fib(i));
	}
	REP(i,v.size())
		cout<<v[i]<<" ";
	/*int t;
	cin>>t;
	while(t--)
	{
		lli x;
		cin>>x;
		int ans=bSearch(0,10000000000,x);
		if(ans==1)
			cout<<"IsFibo"<<endl;
		else cout<<"IsNotFibo"<<endl;
	}*/
}