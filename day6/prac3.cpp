#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Sum of elements in a range given :)
int main(){
    int n;
    cin>>n;
    vector <int> v(n+1);
    for (int i = 1; i <=n; i++){
        cin>>v[i];
    }

    for (int i = 1; i <=n; i++)
    {
        v[i]+=v[i-1];
    }
    
    int q;
    cin>>q;

    while (q--)
    {
        int l,r;
        cin>>l>>r;

        int ans=0;
        ans = v[r] - v[l-1];
        cout<<ans;
    }
}
