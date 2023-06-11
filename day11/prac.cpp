#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Call by refence using Pointers!!!
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10;
    int y = 20;

    int *p1=&x;
    int *p2=&y;

    swap(x,y);

    cout<<x<<" "<<y;
    return 0;
}

/*
It is an example of "call by reference"
to get the access of variable x and y(in the main function) through function swap,
we used the pointers to get the address of the variable x and y ,
and, using the addresss we get to the varible and change its value.
*/ 