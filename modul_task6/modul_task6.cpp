#include <iostream>
using namespace std;

// Хвостова рекурсивна функція для обчислення суми перших n натуральних чисел
int tailRecursiveSum(int n, int sum = 0) {
    if (n == 0) {
        return sum;
    }
    return tailRecursiveSum(n - 1, sum + n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = tailRecursiveSum(n);
    cout << "The sum " << n << " of the first natural numbers: " << sum << endl;

    return 0;
}
