#include <iostream>
#include <vector>
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
pair<int, int> search(const vector<vector<int>>& array, int target, int row, int col) {
    if (row >= array.size()) return { -1, -1 };
    if (col >= array[row].size()) return search(array, target, row + 1, 0);
    if (array[row][col] == target) return { row + 1, col + 1 };
    return search(array, target, row, col + 1);
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

    vector<vector<int>> array = {
       { 1, 2, 3 },
       { 4, 5, 6 },
       { 7, 8, 9 }
    };

    int target = 5;
    auto result = search(array, target, 0, 0);

    if (result.first != -1)
        cout << "Число " << target << " найдено в (" << result.first << ", " << result.second << ")" << endl;
    else
        cout << "Число " << target << " не найдено" << endl;

    return 0;
}
