//Program for factorial of a number
#include<iostream>
using namespace std;

int main(){
    int i,n,fact=1;
    cout<<"Enter the number of which factorial you want:";
    cin>>n;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact;
    return 0;
}