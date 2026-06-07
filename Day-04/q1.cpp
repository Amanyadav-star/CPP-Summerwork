// Code for fibonacci series:
#include<iostream>
using namespace std;

int main(){
    int t1=0,t2=1,n,nextTerm=0;
    cout<<"Enter the number upto which you want series:";
    cin>>n;
     for (int i = 1; i <= n; ++i) {
        // Print the first term
        if (i == 1) {
            cout << t1;
            if(n > 1) cout << ", ";
            continue;
        }
        // Print the second term
        if (i == 2) {
            cout << t2;
            if(n > 2) cout << ", ";
            continue;
        }
        
        // Calculate and print subsequent terms
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm;
        if (i < n) cout << ", ";
    }
    
    cout << endl;
    return 0;
}

