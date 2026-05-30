//For sum of digits of a number 
#include<iostream>
using namespace std;

int main(){
    int i,n,rem,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    for(i=n;i>0;i=i/10){
        rem=i%10;
        sum+=rem;
    }
    cout<<"The sum od digits is "<<sum<<endl;
    return 0;

}