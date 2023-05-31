#include<iostream>
using namespace std;

int main(){

    /*(Diamond of alphabets)
     a    
    abc   
   abcde  
  abcdefg 
 abcdefghi
  abcdefg 
   abcde  
    abc   
     a
     */

    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<char('a'+j);
        }
        cout<<""<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<char('a'+j);
        }
        cout<<""<<endl;
    }

    /*
    (plus pattern)
       *       
       *       
 *  *  *  *  * 
       *       
       * 
    */

    int n;
    cin>>n;
    if(n%2!=0)
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==(n/2) || j==(n/2+1)){
                    cout<<" * ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<""<<endl;
        }
    }
    else{
        return 0;
    }
    return 0;
}