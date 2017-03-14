#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(int *a, int low, int high, int mid,int *b)
{
    int i, j, k, c[50],d[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            d[k]=b[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            d[k]=b[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        d[k]=b[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        d[k]=b[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
        b[i]=d[i];
    }
}
void mergesort(int *a, int low, int high,int *b)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid,b);
        mergesort(a,mid+1,high,b);
        merge(a,low,high,mid,b);
    }
    return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int size[n];
		for(int i=0;i<n;i++)
			cin>>size[i];
		sort(size,size+n);
		int v;
		cin>>v;
		int min0[v];
		int max0[v];
		for(int i=0;i<v;i++)
		{
			cin>>min0[i]>>max0[i];
		}
		mergesort(min0,0,v-1,max0);
		int vcounter=0;
		vector<int> min1;
		vector<int> max1;
		min1.push_back(min0[0]);
		max1.push_back(max0[0]);
		int j=0,ans=0;
		for(int i=0;i<v-1;i++)
		{
			int currentMax=max1[vcounter];
			if(max0[i]+1>=min0[i+1])
			{
				max1[vcounter]=max(max0[i],max(max0[i+1],currentMax));
			}
			else
			{
				while(j<n && size[j]<=max1[vcounter])
				{
					if(size[j]>=min1[vcounter])
					{
						ans++;
						//cout<<"size "<<size[j]<<endl;
					}
					j++;
				}
				min1.push_back(min0[i+1]);
				max1.push_back(max0[i+1]);
				vcounter++;
			}
			//cout<<min1[vcounter]<<" "<<max1[vcounter]<<endl;
		}
		while(j<n && size[j]<=max1[vcounter])
				{
					if(size[j]>=min1[vcounter])
					{
						ans++;
						cout<<"size "<<size[j]<<endl;
					}
					j++;
				}
		cout<<ans<<endl;
	}
}