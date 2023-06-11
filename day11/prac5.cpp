#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int (*p)[5] = &arr;
    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<endl;
    return 0;
}