#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Increment(int& value){
    value++;
}

int main(){
    int a = 5;
    int& ref = a; // -------- REFERENCE -------
    Increment(a);
    cout<<a;
    return 0;
}