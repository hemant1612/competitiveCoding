#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int check[10000];

void shieve(vector<int> &v)
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
	vector<int> v;
	shieve(v);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int f=1;
		while(f==1)
		{
			int copy=n;
			int ans=1;
			for(int i=0;v[i]<=copy;i++)
			{
				int power=0;
				while(n%v[i]==0)
				{
					n/=v[i];
					power++;
				}
				//cout<<v[i]<<" "<<power<<endl;
				ans*=(pow(v[i],power+1)-1)/(v[i]-1);
			}
			ans-=copy;
			if(ans==copy||ans==1)
			{
				cout<<ans<<endl;
				f=0;
			}
			else
			{
				n=ans;
				cout<<ans<<" ";
			}
		}
	}
}