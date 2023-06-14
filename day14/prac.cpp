#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Entity{
    public:
    float x,y;

    void move(float xa,float ya){
        x += xa;
        y += ya;
    }
};
// Inheritance : 
class Player : public Entity{
    public:
    const char* Name;
    void PrintName(){
        cout<<Name<<endl;
    }
};

int main(){

    cout<<sizeof(Entity)<<endl;
    cout<<sizeof(Player)<<endl;
    Player player;
    player.move(5,5);
    player.x=5;
    player.y=6;
    cin.get();
}