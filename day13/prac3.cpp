#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Destructors : 
class Entity{
    public:
    float X,Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
        cout<<"Created"<<endl;
    }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Destructors ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ~Entity(){
        cout<<"Destroyed!!"<<endl;
    }

    void Print(){
        cout<<X<<", "<<Y<<endl;
    }
};

void Function(){
    Entity e;
    e.Print();
}

int main(){
    Function();
    cin.get();
    return 0;
}