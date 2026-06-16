// Code for printing factors of a no.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a no. to print its factors:";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}