// Code for largest prime factor:
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cout<<"Enter a no. to find its largest prime factor:";
    cin >> n;

    int largestPrimeFactor = -1;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0 && isPrime(i)) {
            largestPrimeFactor = i;
        }
    }

    cout << largestPrimeFactor;

    return 0;
} 