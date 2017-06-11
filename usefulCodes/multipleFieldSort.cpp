#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
	int a;
	int b;
	int c;
} collection;

bool sortV(collection var1,collection var2)
{
	if(var1.a!=var2.a)
		return var2.a>var1.a; 
	else if(var2.b!=var1.b)
		return var2.b>var1.b;
	else return var2.c>var1.c;
}

int main()
{
	collection arr[2];
	for(int i=0;i<2;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		arr[i]={a,b,c};
	}
	for(int i=0;i<2;i++)
	{
		cout<<i<<"th entry"<<'\n';
		cout<<arr[i].a<<" "<<arr[i].b<<" "<<arr[i].c<<endl;
	}
	sort(arr,arr+2,sortV);
	for(int i=0;i<2;i++)
	{
		cout<<i<<"th entry"<<'\n';
		cout<<arr[i].a<<" "<<arr[i].b<<" "<<arr[i].c<<endl;
	}
}