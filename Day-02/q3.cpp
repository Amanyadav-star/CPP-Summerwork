// Code for product of digits
#include<iostream>
using namespace std;

int main(){
    int i,n,rem,prod=1;
    cout<<"Enter a no.:";
    cin>>n;
    for(i=n;i>0;i=i/10){
        rem=i%10;
        prod*=rem;
    }
    if(n==0){
        cout<<"Product = 0";
    }
    else
    {cout<<"Product of digits= "<<prod<<endl;}
    return 0;
}