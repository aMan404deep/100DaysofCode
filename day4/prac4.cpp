#include<iostream>
#include<vector>
#include <limits.h>
using namespace std;
// Second Largest Element in Array :) 
int largestElementindex(int array[],int size){
    int max=INT_MIN;
    int maxindex=-1;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
            maxindex=i;
        }
    }
    
    return maxindex;
}

int main(){
    int arr[]={2,3,5,7,6,1};
    int indexlargest = largestElementindex(arr,6);

    arr[indexlargest]=-1;
    int indexsecondlargest = largestElementindex(arr,6);

    cout<<arr[indexsecondlargest];
    return 0;
}