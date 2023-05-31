#include <iostream>
using namespace std;
int main()
{
    //Count number of digits
    int n;
    int sum=0;
    int rem;
    cin>>n;
    while(n!=0){
        rem=n/10;
        sum+=1;
        n=rem;
    }
    cout<<sum;
    
    //Sum of digits
    int n;
    int sum=0;
    int rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<sum;
    
    //Reverse the digits of a number
    int n;
    int rem;
    int rev=0;
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10 + rem;
        n/=10;
    }
    cout<<rev;
    
    
    //S=1-2+3-4+ ---- n (Series)
    int n;
    int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }else{
            sum-=i;
        }
    }
    cout<<sum;
    
    //first n factorial numbers
    int n;
    int fact=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
