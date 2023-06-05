#include <iostream>
using namespace std;

int FibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = FibonacciRecursive(n);

    cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}



