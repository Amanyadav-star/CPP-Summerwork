// Code for reversing a no. 
#include<iostream>
using namespace std;

int main(){
int i , n,rem,reverse=0;
cout<<"Enter a no. to reverse it:";
cin>>n;
for(i=n;i>0;i=i/10){
    rem=i%10;
    reverse=reverse*10+rem;
}
cout<<"The reverse no. is "<<reverse<<endl;
return 0;
}