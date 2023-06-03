#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Target sum triplet :)
    int arr[]={3,1,2,4,0,6};
    int target=5;
    int triplet=0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (arr[i]+arr[j]+arr[k]==target)
                {
                    triplet++;
                }
                
            }
            
        }
        
    }
    cout<<"Triplets: "<<triplet;
}