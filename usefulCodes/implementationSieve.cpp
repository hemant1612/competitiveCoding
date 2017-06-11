#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int check[10000];

void shieve(vector<int> &v)
{
    for(int i=3;i<=100;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                check[j]=1;
        }
    }
    v.push_back(2);
    int j=1;
    for(int i=3;i<=10000;i+=2)
    {
        if(!check[i]){
            v.push_back(i);
        }
    }
}