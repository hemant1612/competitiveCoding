#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int *a,*b,*c,*d,*e,*f;
	int n;
	cin>>n;
	int *m;
	m=new int[n];
	a=new int[n];
	b=new int[n];
	c=new int[n];
	d=new int[n];
	e=new int[n];
	f=new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
		a[i]=m[i];
		b[i]=m[i];
		c[i]=m[i];
		d[i]=m[i];
		e[i]=m[i];
		f[i]=m[i];
	}
	long *values1,*values2;
	values1=new long[(long)pow(n,3)];
	values2=new long[(long)pow(n,3)];
	int count1=0;
	int count2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				values1[count1]=a[i]*b[j]+c[k];
				values2[count2]=d[i]*(e[j]+f[k]);
				count1++;
				count2++;
			}
		}
	}
	cout<<count1<<" cout\n";
	for(int i=0;i<count1;i++)
	{
		cout<<values1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<count2;i++)
	{
		cout<<values2[i]<<" ";
	}
	cout<<endl;
	//values1=removeD(values1,count1);
	for(int i=0;i<count1;i++)
	{
		for(int j=i+1;j<count1;)
		{
			if(values1[i]==values1[j])
			{
				for(int k=j;k<count1;k++)
					values1[k]=values1[k+1];
				count1--;
			}
			else
				j++;
		}
	}
	
	//values2=removeD(values2,count2);
	for(int i=0;i<count2;i++)
	{
		for(int j=i+1;j<count2;)
		{
			if(values2[i]==values2[j])
			{
				for(int k=j;k<count2;k++)
					values2[k]=values2[k+1];
				n--;
			}
			else
				j++;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<values1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<values2[i]<<" ";
	}
	cout<<endl;
	return 0;
}
/*
		a*b+c=d*(e+f)
*/