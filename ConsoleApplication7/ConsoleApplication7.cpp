#include <iostream>
using namespace std;
int reverse_number(int n, int reversed = 0) {
    if (n == 0) {
        return reversed;
    }
    return reverse_number(n / 10, reversed * 10 + n % 10);
}
int main() {
    int number = 321;
    int reversed_number = reverse_number(number);
    cout << reversed_number << endl;
    return 0;
}
