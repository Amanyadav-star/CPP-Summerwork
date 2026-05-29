// Program for counting the digits in a number
#include<iostream>
using namespace std;

int main(){
    int i,n,count=0;
    cout<<"Enter a no. to find its no. of digit";
    cin>>n;

    for(i=n;i>0;i=i/10){
        count+=1;
    }
    cout<<"The no. "<<n<<" has "<<count<<" digits.";
    return 0;
 
}