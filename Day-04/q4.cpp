// Code for printing armstrong no. in a range:
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i,j,n,rem;
    cout<<"Enter a no. to which you want armstrong no.:";
    cin>>n;
    for(i=1;i<=n;i++){
        int count=0,sum=0;
    for(j=i;j>0;j=j/10){
        count+=1; 
    }
    for(j=i;j>0;j=j/10){
        rem=j%10;
        sum+=pow(rem,count);
    }
    if(i==sum){
        cout<<i<<" ";
    }}
     

    return 0;
}