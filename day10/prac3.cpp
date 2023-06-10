#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int val=0;
    int N;
    cin>>N;
    for (int i = 2; i <=N; i*=i)
    {
        val++;
    }
    //final value of i : 2 to the power log (base 2) N
    //iterations : log(log N)
}