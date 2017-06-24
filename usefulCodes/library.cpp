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

int check[100000];
void shieve(vi &v)
{
    for(int i=3;i*i<=100000;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=100000;j+=i)
                check[j]=1;
        }
    }
    v.push_back(2);
    int j=1;
    for(int i=3;i<=100000;i+=2)
    {
        if(!check[i]){
            v.push_back(i);
        }
    }
}

/*
	Given a range of integers R = {l, l + 1, ..., r - 1, r}
	and a monotonically increasing predicate P, find the
	smallest  for which P(x) holds true. I then use the
	following code:
	FFFTTT
*/
int bSearch1(int low,int high,int a[])
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		if(/*condition true*/)
			high=mid;
		else low=mid+1;
	}
	//now low=high=x(see above for x)
	return low;
}
/*
	Note this does not work if P(r)=0. The algorithm will
	return x=r. To avoid this we artificially insert P(r+1)
	and set P(r+1)=1.
	Better precheck for this situation!
*/


/*
	Given a range of integers R = {l, l + 1, ..., r - 1, r}
	and a monotonically decreasing predicate P, find the 
	largest  for which P(x) holds true.
	If we set Q(x) = !P(x),then Q is increasing and we can
	use (1) to find x + 1. We can also just use the
	following slightly modified variant:
	TTTTFFF
*/
int bSearch2(int low,int high,int a[])
{
	while(low<high)
	{
		int mid=(low+high+1)/2;
		if(/*condition is true*/)
			low=mid;
		else high=mid-1;
	}
	//now low=high=x(see above for x)
	return low;
}