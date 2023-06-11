#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[2] = {1,2};
    int *ptr = &arr[0];
    cout<<*ptr++<<endl;
    cout<<(*ptr)++<<endl;
    
    return 0;
}