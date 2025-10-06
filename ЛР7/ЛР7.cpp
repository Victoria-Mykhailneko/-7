#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 4;
    int a[n][n];
    int sum = 0, count = 0;

    cout << "Введіть елементи матриці 4x4:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] % 5 == 0) {
                sum += a[i][j];
                count++;
            }
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        cout << "Середнє арифметичне елементів кратних 5: " << average << endl;
    }
    else {
        cout << "Немає елементів, кратних 5." << endl;
    }

    return 0;
}
