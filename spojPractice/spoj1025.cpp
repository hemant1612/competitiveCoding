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
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		int n;
		cin>>n;
		int *m;
		int *w;
		m=new int[n];
		w=new int[n];
		for(int i=0;i<n;i++)
			cin>>m[i];
		for(int i=0;i<n;i++)
			cin>>w[i];
		sort(m,m+n);
		sort(w,w+n);
		int sum=0;
		for(int i=0;i<n;i++)
			sum+=m[i]*w[i];
		cout<<sum<<endl;
	}
}