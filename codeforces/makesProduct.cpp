#include <bits/stdc++.h>

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
#define mii map<int,int>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl "\n"

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

ulli poW(lli x,ulli y)
{
	//this function only returns correct values upto the order of ~10^18
	//use pow of math to obtain greater answers
	lli temp;
	if(y==0)
		return 1;
	temp=poW(x,y/2);
	if(y%2==0)
		return temp*temp;
	else return x*temp*temp;
}

int bSearch(int low,int high,int a[],int sh)
{
	//function for searching till where is a sh<=
	while(low<high)
	{
		int mid=low+(high-low+1)/2;
		if(a[mid]>sh)
			high=mid-1;
		if(a[mid]<=sh)
			low=mid;
	}
	return low;
}

ulli modular_pow(ulli b,ulli e,ulli m)
{
	if(e==0)
		return 1;
	if(e==1)
		return b;
	else
	{
		ulli res=1;
		b=b%m;
		while(e>0)
		{
			if(e&1) //e%2
				res=(res*b)%m;
			e=e>>1;
			b=(b*b)%m;
		}
		return res%m;
	}
}
const int sz=10001;
vector<pair<int,int> > a[sz];
int dis[sz];
bool vis[sz]={0};
void Dijkstra(int source, int n)
{
	//you need an [int] array dis and a bool array vis
	//also a vii [a] with edge,weight pair
	//n is the number of nodes(vertices)
    for(int i=0;i<sz;i++)
        dis[i]=INF;
    class prioritize
    {
    	public: bool operator ()(pair<int, int>&p1 ,pair<int, int>&p2)
    	{
    		return p1.second>p2.second;
    	}
    };
    priority_queue<pair<int,int> ,vector<pair<int,int> >, prioritize> pq;
    pq.push(make_pair(source,dis[source]=0));
    while(!pq.empty())
    {
        pair<int, int> curr=pq.top();
        pq.pop();
        int cv=curr.first,cw=curr.second;
        if(vis[cv])
            continue;
        vis[cv]=true; 
        for(int i=0;i<a[cv].size();i++)
            if(!vis[a[cv][i].first] && a[cv][i].second+cw<dis[a[cv][i].first])
                pq.push(make_pair(a[cv][i].first,(dis[a[cv][i].first]=a[cv][i].second+cw)));
    }
}

int check[10000];
void shieve(vi &v)
{
    for(int i=3;i<=100;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                check[j]=1;
        }
    }
    v.push_back(2);
    int j=1;
    for(int i=3;i<=10000;i+=2)
    {
        if(!check[i]){
            v.push_back(i);
        }
    }
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
	int n;
	cin>>n;
	lli a[n];
	REP(i,n) cin>>a[i];
	sorta(a,n);
	if(a[0]==a[1]&&a[1]==a[2])
	{
		lli counter=0;
		FOR(i,3,n-1)
		{
			if(a[i]==a[2])
				counter++;
			else break;
		}
		counter+=3;
		cout<<(counter*(counter-1)*(counter-2))/6<<endl;
	}
	else if(a[0]==a[1]&&a[1]!=a[2])
	{
		lli counter=0;
		FOR(i,3,n-1)
		{
			if(a[i]==a[2])
				counter++;
			else break;
		}
		counter+=1;
		cout<<counter<<endl;
	}
	else if(a[0]!=a[1]&&a[1]==a[2])
	{
		lli counter=0;
		FOR(i,3,n-1)
		{
			if(a[i]==a[2])
				counter++;
			else break;
		}
		counter+=2;
		cout<<(counter*(counter-1))/2<<endl;
	}
	else
	{
		lli counter=0;
		FOR(i,3,n-1)
		{
			if(a[i]==a[2])
				counter++;
			else break;
		}
		counter+=1;
		cout<<counter<<endl;
	}
}