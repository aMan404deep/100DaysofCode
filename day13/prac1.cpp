#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//enum: 
class Log{
    public:

    enum Level{
        LevelError = 0,LevelWarning ,LevelInfo
    };
    private:
    Level m_LogLevel = LevelInfo;
    public:
    void SetLevel(Level level){
        m_LogLevel = level;
    }

    void Warn(const char* message){
        if(m_LogLevel>= LevelWarning){
            cout<<"[WARNING]: "<<message<<endl;
        }
    }

    void Error(const char* message){
        if(m_LogLevel>= LevelError){
            cout<<"[ERROR]: "<<message<<endl;
        }
    }

    void Info(const char* message){
        if(m_LogLevel>= LevelInfo){
            cout<<"[INFO]: "<<message<<endl;
        }
    }
};

int main(){
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Info("Info");
    log.Error("error");
    return 0;
}