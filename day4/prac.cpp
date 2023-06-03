#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Target sum pair :)
    int arr[]={3,4,6,7,1};
    int target=7;
    int pair=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]+arr[j]==7)
            {
                pair++;
            }
        }
    }
    cout<<"Pairs: "<<pair;
    
}