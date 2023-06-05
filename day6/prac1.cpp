#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Partion sum of elements in a vector
bool partitionSum(vector <int> &v){
    int sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
    }
    
    int prefix_sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=sum-prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
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
    
    cout<<partitionSum(v)<<endl;
    return 0;
}