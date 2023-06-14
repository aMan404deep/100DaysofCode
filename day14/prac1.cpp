#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//virtual function: 
class Entity{
    public:
    virtual string GetName(){
        return "Entity";
    }
};

class Player : public Entity{
    private:
    string m_Name;
    public:
    Player(const string& name) : m_Name(name){

    }
    string GetName(){
        return m_Name;
    }
};

void PrintName(Entity* entity){
    cout<<entity->GetName()<<endl;
}

int main(){
    Entity* e = new Entity();
    PrintName(e);
    Player* p = new Player("Amandeep");
    PrintName(p);
    return 0;
}