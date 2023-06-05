#include <iostream>
using namespace std;
int fibonacciArray(int n) {
    int fibArray[n + 1];
    fibArray[0] = 0;
    fibArray[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacciArray(n);

    cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}



