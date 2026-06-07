// Code for checking whether a no. is armstrong or not:
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,n,rem,count=0,sum=0;
    cout<<"Enter a no. to check is it armstrong no. or not:";
    cin>>n;
    for(i=n;i>0;i=i/10){
        count+=1; 
    }
    for(i=n;i>0;i=i/10){
        rem=i%10;
        sum+=pow(rem,count);
    }
    if(n==sum){
        cout<<"The given no. is armstrong no.";
    }
    else{
        cout<<"The given no. is not armstrong no.";
    }

    return 0;
}