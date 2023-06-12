#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Player{
    public:
    int x,y;
    int speed;

    void Move(int xa,int ya){
        x+=xa*speed;
        y+=ya*speed;
    }
};

int main(){
    Player player;
    player.Move(1,-1);
    cin.get();
}