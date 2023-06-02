#include<iostream>
#include<vector>
using namespace std;

int main(){
    // check whether the vector is sorted or not
    vector <int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    bool sorted = true;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i]<=v[i-1])
        {
            sorted = false;
        }      
    }
    cout<<sorted;
}