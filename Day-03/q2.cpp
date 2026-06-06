// Printing prime no.'s in a range
#include<iostream>
using namespace std;

int main(){
    int i,j,n1,n;
    cout<<"Enter the smaller no. from which you want prime no. :";
    cin>>n1;
    cout<<"Enter the no. upto which you want prime no.";
    cin>>n;
    for(i=n1;i<=n;i++){
     int count=0;
     if(i==0||i==1){
        count=1;
     }
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }
return 0;
}