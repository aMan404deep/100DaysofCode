#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Count number of occurences
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    int x;
    cout<<"enter x: ";
    cin>>x;

    int occurence=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==x)
        {
            occurence+=1;
        }
    }
    cout<<occurence;
    return 0;
}