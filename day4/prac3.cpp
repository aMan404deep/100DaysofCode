#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Array Manipulation :)
    int arr[]={2,3,1,3,2,4,1};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
    }
    
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]!=-1)
        {
            cout<<arr[i];
        }
        
    }
    
}