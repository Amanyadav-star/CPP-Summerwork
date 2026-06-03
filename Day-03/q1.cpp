// Code to check a number is prime or not.
#include<iostream>
using namespace std;

int main(){
    int i,n,rem,count=0;
    cout<<"Enter a no.";
    cin>>n;
    for(i=1;i<=n;i++){
        rem=n%i;
        if(rem==0){
            count+=1;
        }
    }
    if(count>2){
        cout<<"The no. is not prime.";
    }
    else{
        cout<<"The no. is prime.";
    }
    return 0;

}