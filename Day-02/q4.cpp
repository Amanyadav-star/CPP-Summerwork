// Code for checking wether a number is palindrome or not.
#include<iostream>
using namespace std;

int main(){
    int i,n,rem,reverse=0;
    cout<<"Enter a no. to check is it palindrome:";
    cin>>n;
    for(i=n;i>0;i=i/10){
        rem=i%10;
        reverse=reverse*10+rem;
    }
    if(reverse==n){
        cout<<"The no. is palindrome.";
    }
    else{
        cout<<"The no. is not palindrome.";
    }
    return 0;
}