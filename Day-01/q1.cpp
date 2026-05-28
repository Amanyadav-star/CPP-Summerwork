#include<iostream>
using namespace std;
 // Code for sum of first n natural numbers
int main(){
 int i,n,sum=0;
cout<<"Enter the number upto which you want sum:";
cin>>n;
for(i=1;i<=n;i++){
    sum+=i;
}   
cout<<"The sum of numbers upto "<<n<<"is "<<sum<<endl;
return 0;
}