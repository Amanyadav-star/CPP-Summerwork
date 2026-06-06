// Code for LCM of two no.s:
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int i,a,b,lcm,gcd=1;
    cout<<"Enter two no's :";
    cin>>a>>b;
    for(i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }

    }
     lcm=(a*b)/gcd;
     cout<<"LCM="<<lcm;
 
   return 0;
 
}