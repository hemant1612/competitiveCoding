#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define whatIs(x) cout<<#x<<" is "<<x<<endl;
#define fillA(a,value) memset(a,value,sizeof(a));
#define len(s) s.length()
#define reached cout<<"reached "<<endl;
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define msi multiset<int>
#define nl "\n"
#define sii set<int,int>
#define sz size

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

const int MAX=1000;
vi tree[MAX];
int mark[MAX]={0};

/*
	When you have a tree the max independent set can be thought in a bottom up way
	For any particular node there are only 2 possibilities.
		1. The LISS contains the nodes and all the grandchildren of it.
		2. The LISS contains of all the children excluding the node.
	Formally
	LISS(X)=MAX{(1+sum of all the LISS of the grandchildren),(sum of LISS of all the children)}
	
	The naive algorithm is to run through all the possible subsets and find which one is the maximum
	However this is too slow as the time is exponential.
	To better it we use DP.
	We remember the solution to a sub problem and if it ever comes up again then we just call it in O(1)
	The complexity now is O(n) as there are n sub-problems that we need to solve.

*/
struct node
{
	int data;
	int liss;
	struct node *left,*right;
};

int LISS(struct node *root)
{
	if(root==NULL)
		return 0;
	if(root->liss)
		return root->liss;
	if(root->left==NULL&&root->right==NULL)
	{
		root->liss=1;
		return root->liss;
	}
	//calculate the size excluding the current node
	int liss_exclude=LISS(root->left)+LISS(root->right);

	//calculate the size including the current node
	int liss_include=1;
	if(root->left)
		liss_include+=LISS(root->left->left)+LISS(root->left->right);
	if(root->right)
		liss_include+=LISS(root->right->left)+LISS(root->right->right);
	root->liss=max(liss_exclude,liss_include);
	return root->liss;
}	

struct node* newNode(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	temp->liss=0;
	return temp;
}
int main()
{
	fio;
	
	
	return 0;
}