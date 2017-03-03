#include <iostream>
using namespace std;
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
int main()
{
	int t;
	int q=1;
	cin>>t;
	while(t--)
	{
		int br;
		int fr;
		cin>>br>>fr;

		int m[100000];
		//m=new int[fr];
		for(int i=0;i<fr;i++)
			cin>>m[i];
		mergesort(m,0,fr-1);
		int sum=0;
		int ans=0;
		//for(int i=0;i<fr;i++)
		//	cout<<m[i]<<" ";
		//cout<<endl;
		//cout<<br<<"br"<<endl;
		for(int i=fr-1;i>0;i--)
		{
			sum+=m[i];
			//cout<<sum<<" ";
			if(sum>=br)
			{
				ans=fr-i;
				break;
			}
		}
		if(ans!=0)
		{
			cout<<"Scenario #"<<q<<":\n";
			cout<<ans<<endl;
			q++;
		}
		else
		{
			cout<<"Scenario #"<<q<<":\n";
			cout<<"impossible"<<endl;
			q++;
		}
		cout<<endl;
	}
}