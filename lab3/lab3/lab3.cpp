#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;

    cout << "Введіть перше число:" << endl;
    cin >> n;
    cout << "Введіть друге число:" << endl;
    cin >> m;

    if (n * m != 0) {

        while (n != m) {
            if (n > m) {
                n = n - m;
            }
            else {
                m = m - n;
            }
        }
    }
    else {
        return 0;
    }
    
    printf("Результат: %d", n);

}
