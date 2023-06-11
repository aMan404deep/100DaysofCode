#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void FirstandLastIndex(string s,char ch,int *first,int *last){
    for (int  i = 0; i < s.size(); i++)
    {
        if (s[i]==ch)
        {
            *first=i;
            break;
        }
    }
    for (int i = s.size()-1; i >=0; i--)
    {
        if (s[i]==ch)
        {
            *last=i;
            break;
        }   
    }   
}
int main(){
    string s="aaabac";
    char c ='a';
    int first=-1;
    int last=-1;
    int *pf=&first;
    int *pl=&last;
    FirstandLastIndex(s,c,pf,pl);

    cout<<*pf<<" "<<*pl;
    return 0;
}