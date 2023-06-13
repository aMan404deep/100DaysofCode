#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Constructors : 
class Entity{
    public:
    float X,Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
    }

    Entity(float x,float y){
        X=x;
        Y=y;
    }

    void Print(){
        cout<<X+Y<<endl;
    }
};

int main(){
    Entity e(10.0f,5.0f);
    
    e.Print();
    cin.get();
    return 0;
}