// Code for GCD of two no.
#include<iostream>
using namespace std;

int main(){
    int i,a,b,gcd=1;
    cout<<"Enter two no's :";
    cin>>a>>b;
    for(i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }

    }
    cout<<"GCD="<<gcd;
   return 0;
 
}