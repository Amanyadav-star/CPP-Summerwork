//Program for multiplication table of given number
#include<iostream>
using namespace std;

int main(){
    int i,n,product=1;
    cout<<"Enter the number of which table you want:";
    cin>>n;
    cout<<"The table of "<<n<<" is:"<<endl;
    for(i=1;i<=10;i++){
        product=n*i;
        cout<<product<<endl;
    }
    return 0;
}