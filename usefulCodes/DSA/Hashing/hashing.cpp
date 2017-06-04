#include <iostream>
#include <string>
#include <vector>
using namespace std;
//implementation of chaining or open hashing

//Assumption is that the hash function will return a value between 0-19 
vector<string> hashTable1[19];
int hashTableSize1=19;

//the hash function
int hashF(string s)
{
	int index=0;
	for(int i=0;i<s.length();i++)
	{
		index+=int(s.at(i))*(i+1);
	}
	return index%19;
}

//function to insert
void insert1(string s)
{
	//compute the index using a hash function
	int index=hashF(s);
	//insert the element into the hash table
	hashTable1[index].push_back(s);
}

//function to search
void search1(string s)
{
	//compute the index by using a hash function
	int index=hashF(s);
	//search the linked list at that index
	int flag=0;
	for(int i=0;i<hashTable1[index].size();i++)
	{
		if(hashTable1[index][i]==s)
		{
			cout<<s<<" is found!"<<endl;
			flag=1;
		}
	}
	if(flag==0) cout<<s<<" is not present in the hash table"<<endl;
}

//-------------------------------------------------

//implementation of a hash function using linear probing

//assumptions
string hashTable2[19];
int hashTableSize2=19;

/*
	under open addressing there are many different tricks that you can use to avoid collisions
	one such trick is instead of linear probing go for quadratic probing or double hash functions
		in quadratic probing you do this
		maintain a variable h
		insert at
		index=(index+h*h)%hashTableSize
		h++

		in double hash funcions you increment by the value that the 2nd hash function gives.
*/
//insert function
void insert2(string s)
{
	int index=hashF(s);
	//search for an unused slot and if the index will exceed then roll back
	while(hashTable2[index]!="")
		index=(index+1)%19;
	hashTable2[index]=s;
}

//search function
void search2(string s)
{
	int index=hashF(s);
	//search for the index and roll back if you exceede the array size
	while(hashTable2[index]!=s && hashTable2[index]!="")
		index=(index+1)%19;
	if(hashTable2[index]==s)
		cout<<s<<" is found!"<<endl;
	else cout<<s<<" is not present in the hash table"<<endl;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		insert2(s);
	}
	while(1)
	{
		string s;
		cin>>s;
		if(s=="123")
			break;
		else search2(s);
	}
}