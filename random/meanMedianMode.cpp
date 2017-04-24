#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <numeric> //accumulate for vector
#include <iomanip>
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int main()
{
	int n;
	cin>>n;
	map<int,int> m;
	int a[n];
	double sum=0;
	REP(i,n)
	{
		cin>>a[i];
		sum+=a[i];
		m[a[i]]+=1;
	}
	sort(a,a+n);
	int mode=1000000;
	int freq=0;
	for(auto x:m)
	{
		if(x.second>=freq)
		{
			freq=x.second;
			if(x.first<=mode)
				mode=x.first;
		}
	}
	
	double median=0;
	if(n%2==0)
	{
		//cout<<"bla"<<endl;
		//cout<<a[(n-1)/2]<<" "<<a[(n-1)/2+1]<<endl;
		//cout<<(a[(n-1)/2]+a[(n-1)/2+1])<<endl;
		median=(a[(n-1)/2]+a[(n-1)/2+1])/2.0;
	}
	else
	{
		//cout<<"bla"<<endl;
		//cout<<a[n-1/2]<<endl;
		median=a[n/2+1];
	}
	double mean=sum/n;
	cout <<setprecision(1)<<fixed;
	cout<<mean<<endl;
	cout<<median<<endl;
	cout<<mode<<endl;
}