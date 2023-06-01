#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i<N; i++) {
        cin>>arr[i];
    }
    for (int j = 0; j<N/2; j++) {
        int temp = arr[j];
        arr[j] = arr[N-1-j];
        arr[N-1-j]=temp;
    }
    for (int i  : arr) {
        cout<< i<<" ";
    }
    
    
    
    return 0;
}