#include <iostream>
#include <sdt>
int main() // программа является учебной
{
    setlocale(LC_ALL, "Russia");
    int x, y;
    cout << "введите x: ";
    cin >> x;
    cout << "введите y: ";
    cin >> y;
    cout << " x + y = " << x + y << endl;
    return 0;
}