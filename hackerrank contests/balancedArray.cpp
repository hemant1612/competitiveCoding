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
int check[100000000];
void initialize(vector<pair<int,int>> &v)
{
	cout<<"function called"<<endl;
	for(int i=3;i*i<=100000000;i+=2)
	{
		if(!check[i])
		{
			for(int j=i*i;j<=100000000;j+=i)
			{
				check[j]=1;
			}
		}
	}
	v.push_back(make_pair(2,0));
	for(int i=3;i<=100000000;i+=2)
	{
		if(!check[i])
			v.push_back(make_pair(i,0));
	}
}
int main()
{
	vector<pair<int,int>>v;
	initialize(v);
	int n;
	cin>>n;
	int a[n];
	REP(i,n)
		cin>>a[i];
	REP(i,n)
	{
		int j=0;
		while(j*j<=a[i])
		{
			while(v[j])
		}
	}
}