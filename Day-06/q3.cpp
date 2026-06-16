// Code for counting bits:
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout<<"Enter the no.";
    cin >> n;

    while(n > 0) {
        count += n & 1;
        n >>= 1;
    }

    cout << count;

    return 0;
}