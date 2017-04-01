#include <iostream>
#include <algorithm>
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
	int n,m;
	cin>>n>>m;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
		sort(a[0],a[0]+n);
	}
	for(int j=0;j<n;j++)
	{
		int m[n];
		for(int i=0;i<n;i++)
			m[i]=a[i][j];
		
		mergesort(m,0,n);
		for(int i=0;i<n;i++)
			a[i][j]=m[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[i][j])
		}
	}
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j];
		cout<<endl;
	}*/
}