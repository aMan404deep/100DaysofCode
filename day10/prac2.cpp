#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int val=0;
    for (int i = 1; i <= N; i*=2)
    {
        for (int j = 1; j <= i; j++)
        {
            val++;
        }
    }
    //Iterations : 1 + 2 + 4 + 8 + ----- + 2 to the power k = N.
    //final value of i : 2 to the power k.
}