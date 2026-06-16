#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0;

    cout<<"Enter a no. to cheeck strong no:";

    cin >> n;
    temp = n;

    while(temp > 0) {
        int digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }

    if(sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}