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
typedef long long ll;
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
int bSearch(int a[],int low,int high,int sh)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==sh)
		{
			return mid;
		}
		else if(a[mid]>sh)
		{
			high=mid-1;
		}
		else low=mid+1;
	}
	return -1;
}
int partition(int a[],int b[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	FOR(j,low+1,high-1)
	{
		if(a[j]<pivot)
		{
			int temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			int temp1=b[j];
			b[j]=b[i];
			b[i]=temp1;
			i++;
		}
	}
	int temp=a[low];
	a[low]=a[i-1];
	a[i-1]=temp;
	int temp1=b[i-1];
	b[i-1]=b[low];
	b[low]=temp1;
	return i;
}
void quicksort(int a[],int b[],int low,int high)
{
	if(low<high)
	{
		int pivot=partition(a,b,low,high);
		quicksort(a,b,low,pivot-1);
		quicksort(a,b,pivot,high);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cost,n;
		cin>>cost>>n;
		int a[n],b[n];
		REP(i,n)
		{
			cin>>a[i];
			b[i]=i+1;
		}
		quicksort(a,b,0,n);
		int flag=0;
		REP(i,n)
		{
			int f=bSearch(a,i+1,n,cost-a[i]);
			if(f>-1)
			{
				flag=1;
				if(b[i]<b[f])
					cout<<b[i]<<" "<<b[f]<<endl;
				else
					cout<<b[f]<<" "<<b[i]<<endl;
				break;
			}
		}
	}
}