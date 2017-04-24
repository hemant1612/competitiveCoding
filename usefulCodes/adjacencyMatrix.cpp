#include <iostream>
using namespace std;
bool A[10][10];
void initialize()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
			A[i][j]=0;
	}
}
int main()
{
	int x,y,nodes,edges;
	initialize();
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		A[x][y]=true;							
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(A[i][j]==true)
				cout<<"Theere is an edge between "<<i<<" and "<<j<<endl;
			else cout<<"Theere isn't an edge between "<<i<<" and "<<j<<endl;
		}
	}
	return 0;
}