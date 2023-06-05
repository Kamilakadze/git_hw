#include <iostream>
using namespace std;
int fibonacciNonRecursive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 2; i <= n; i++) {
        int temp = current;
        current += previous;
        previous = temp;
    }

    return current;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacciNonRecursive(n);

    cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}



