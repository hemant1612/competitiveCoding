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

void codeforces416B_B()
{
	/*
	Codeforces Round #416B
	Q->B
	basic idea is that an array is given in some unsorted order.
	you have 3 inputs l,r,x
		You have to-
			Sort the elements between l and r
			and then check if the element at position x is same in the new array and the original array

	WHAT YOU SHOULD NOT DO->
		store the elements in a vector and sort between l and r and then check
		WHY?-> too slow take O(nlog(n)) time
	WHAT YOU SHOULD DO->
		scale the array to [0,r-l+1]. l->0 and so on
		count the number of elements that are lesser in magnitude than the number at position x
		if the number of elements is equal to x the true else false
	*/
//code
	int n,m; //number of elements and querries
	cin>>n>>m;
	int a[n];
	REP(i,n)
		cin>>a[i];
	while(m--)
	{
		int l,r,x;
		cin>>l>>r>>x;
		l--;r--;x--;
		int counter=0;
		FOR(j,l,r)
		{
			if(a[j]<a[x])
				counter++;
		}
		if(l+counter==x)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    codeforces416B_B();
}