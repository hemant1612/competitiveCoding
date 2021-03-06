#include <bits/stdc++.h>

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
#define mii map<int,int>
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

int mark[101];
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
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int flag=1;
	int counter=0;
	vector<string> v;
	int all=0;
	REP(i,n)
    {
        REP(j,m)
        {
        	int x;
        	cin>>x;
        	if(x!=0)
        		all=1;
        	a[i][j]=x;
    	}
    }
    if(all)
    {
		if(n<=m)
		{
			REP(i,n)
			{
				int min=INF;
				int max=-1;
				REP(j,m)
				{
					
					int x=a[i][j];
					if(x>0)
						flag=1;
					if(x<min)
					{
						min=x;
					}
					if(x>max)
						max=x;
				}
				if(flag)
				{
					if(min==max)
						counter++;
					if(min!=0)
					{
						while(min!=0)
						{
							min--;
							v.pb("row "+to_string(i+1));	
						}				
					}
				}
			}
			int size=v.size();
			if(size!=0)
			{
				if(counter!=n)
				{
					REP(i,m)
					{
						int min=INF;
						REP(j,n)
						{
							int y=a[j][i];
							if(y<min)
								min=y;
						}
						if(min!=0)
						{
							while(min!=0)
							{
								min--;
								v.pb("col "+to_string(i+1));
							}
						}
					}
					size=v.size();
					cout<<size<<endl;
					REP(i,size)
						cout<<v[i]<<endl;
				}
				else
				{
					cout<<size<<endl;
					REP(i,size)
						cout<<v[i]<<endl;
				}
			}
			else cout<<"-1"<<endl;
		}
		else
		{
			REP(i,m)//cols
		    {
		        int min=INF;
		        int max=-1;
		        REP(j,n) //rows
		        {
		            int y=a[j][i];
		            if(y>0)
		                flag=1;
		            if(y<min)
		                min=y;
		            if(y>max)
		                max=y;
		        }
		        if(flag)
		        {
		            if(min==max)
		                counter++;
		            if(min!=0)
		            {
		                while(min!=0)
		                {
		                    min--;
		                    v.pb("col "+to_string(i+1));
		                }
		            }
		        }
		    }
		    int size=v.size();
		    if(size!=0)
		    {
		        if(counter!=n)
		        {
		            REP(i,n)
		            {
		                int min=INF;
		                REP(j,m)
		                {
		                    int x=a[i][j];
		                    if(x<min)
		                        min=x;
		                }
		                if(min!=0)
		                {
		                    while(min!=0)
		                    {
		                        min--;
		                        v.pb("row "+to_string(i+1));
		                    }
		                }
		            }
		        size=v.size();
		        cout<<size<<endl;
		        REP(i,size)
		            cout<<v[i]<<endl;
		        }
		        else
		        {
		            cout<<size<<endl;
		                REP(i,size)
		                    cout<<v[i]<<endl;
		        }
		    }
		    else cout<<"-1"<<endl;
		}
	}
	else cout<<"0"<<endl;
}
