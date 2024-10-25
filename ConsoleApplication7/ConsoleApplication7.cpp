#include <iostream>
using namespace std;
int fibonachi(int num) {
    if (num == 0 || num == 1) return num;
    return fibonachi(num - 1) + fibonachi(num - 2);
}
int main() 
{
    cout << "Введите число:" << endl;
    int fibnum;
    cin >> fibnum;
    cout << "Число Фибоначчи: " << fibonachi(fibnum) << endl;
}
