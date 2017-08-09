#include <bits/stdc++.h>
#include <iomanip>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define msi multiset<int>
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

double fact(int n)
{
	if(n==0)
		return 1.0000;
	double ans=1;
	FOR(i,2,n)
		ans*=i;
	return ans;
}

int main()
{
	fio;
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	string s1,s2;
	cin>>s1>>s2;
	int counter1=0,counter2=0,counter3=0,counter4=0;
	REP(i,s1.length())
	{
		if(s1.at(i)=='+')
			counter1++;
		else if(s1.at(i)=='-')
			counter2++;
	}
	REP(i,s2.length())
	{
		if(s2.at(i)=='+')
			counter3++;
		else if(s2.at(i)=='-')
			counter4++;
	}
	if(counter3<=counter1&&counter4<=counter2)
	{
		lli left=(counter1+counter2)-(counter3+counter4);
		if(left==0)
			cout<<"1.000000000000"<<endl;
		else
		{
			double prob=fact(left)/(fact(counter1-counter3)*fact(counter2-counter4));
			prob=prob/(double)pow(2,left);
			cout << fixed <<showpoint;
	  	  	cout << setprecision(6);
	  	  	cout<<prob<<endl;
	  	}
	}
	else
		cout<<"0.000000000000"<<endl;
	return 0;
}