#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;

int main(){
    //Rotate an array
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%n;
    int ansarray[5];
    int j=0;
    for (int i = n-k; i < n; i++)
    {
        ansarray[j++]=arr[i];
    }

    for (int i = 0; i <=k; i++)
    {
        ansarray[j++]=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<ansarray[i]<<endl;
    }
    
    
    return 0;
}