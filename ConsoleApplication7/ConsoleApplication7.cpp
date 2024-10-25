#include <iostream>
using namespace std;
int fibonachi(int num) {
    if (num == 0 || num == 1) return num;
    return fibonachi(num - 1) + fibonachi(num - 2);
}
int akkerman(int m, int n) {
    if (m == 0) return n + 1;
    else if (n == 0) return akkerman(m - 1, 1);
    else return akkerman(m - 1, akkerman(m, n - 1));
}
int main() 
{
    cout << "Введите число:" << endl;
    int fibnum;
    cin >> fibnum;
    cout << "Число Фибоначчи: " << fibonachi(fibnum) << endl;
    cout << "Введите число m:" << endl;
    int m;
    cin >> m;
    cout << "Введите число n:" << endl;
    int n;
    cin >> n;
    cout << "Число Аккермана: " << akkerman(m, n) << endl;

}
