#include <iostream>
#include <sdt>
int main() 
{
    setlocale(LC_ALL, "Russia");
    int x, y;
    cout << "введите x: ";
    cin >> x;
    cout << "введите y: ";
    cin >> y;
    cout << " x + y = " << x + y << endl;
    cout << " x - y = " << x - y << endl;
    return 0;
}