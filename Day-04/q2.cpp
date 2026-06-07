// Code for nth term of fibonacci series :
#include<iostream>
using namespace std;

int main(){
    int i,t1=0,t2=1,n,nth=0;
    cout<<"Enter the term you want to find:";
    cin>>n;
    if(n==1){
        cout<<"The first term is :0";
    } 
    if(n==2){
        cout<<"The second term is :1";
    }
    else{
        for(i=3;i<=n;i++){
            nth=t1+t2;
            t1=t2;
            t2=nth;
        }
        cout<<"The "<<n<<"th term is:"<<nth;
    }
    
    return 0;
}