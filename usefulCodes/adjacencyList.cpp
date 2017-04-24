#include <iostream>
#include <vector>
using namespace std;
vector<int> adj[10];
int main()
{
	int x,y,nodes,edges;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=nodes;i++)
	{
		cout<<"Adjacency Lists of "<<i<<" are"<<endl;
		for(int j=0;j<adj[i].size();j++)
		{
        	if(j == adj[i].size() - 1)
                cout << adj[i][j] << endl;
        else
            cout << adj[i][j] << " --> ";
		}
	}
	return 0;
}