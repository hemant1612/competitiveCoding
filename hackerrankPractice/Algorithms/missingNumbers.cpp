#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binaryS(vector<int> a,int sh, int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==sh)
		{
			//cout<<"mid "<<mid<<endl;
			return mid;
		}
		else if(a[mid]<sh)
			low=mid+1;
		else if(a[mid]>sh)
			high=mid-1;
	}
	return -1;
}
int main()
{
	int n,m;
	cin>>n;
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		v2.push_back(x);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<endl;
	int j=0;
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i]==v2[j])
		{
			v2.erase(v2.begin()+j);
		}
		else
			j++;
		cout<<"v1i "<<v1[i]<<"J "<<j<<endl;
		for(int i=0;i<v2.size();i++)
		{
			cout<<v2[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<v2.size();i++)
	{
		for(int j=i+1;j<v2.size();)
		{
			if(v2[i]==v2[j])
				v2.erase(v2.begin()+j);
			else
				j++;

		}
	}
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<endl;
}