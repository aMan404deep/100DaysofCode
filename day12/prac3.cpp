#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Entity{
    static int x,y;

    static void Print(){
        cout<<x<<", "<<y<<endl;
    }
};

int Entity::x;
int Entity::y;
int main(){
    Entity e;
    Entity::x=2;
    Entity::y=3;

    Entity e1;
    Entity::x=5;
    Entity::y=8;
    Entity::Print();
    Entity::Print();
}