#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Prefix sum of element of a vector;

void prefixSum(vector<int> &v){
    for (int i = 1; i < v.size(); i++)
    {
        v[i]=v[i]+v[i-1];
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    prefixSum(v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}