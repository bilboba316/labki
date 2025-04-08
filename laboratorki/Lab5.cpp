#include <iostream>
#include <Windows.h>
using namespace std;

int sqr(int n, int m);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "перший вираз:" << endl << "2^6 = " << sqr(2, 6) << endl;
    cout << "другий вираз:" << endl << "3^4 = " << sqr(3, 4) << endl;
    cout << "третій вираз:" << endl << "5^3 = " << sqr(5, 3) << endl;
}

int sqr(int n, int m) {
    int n0 = n;
    for (int i = 1; i < m; i++) {
        n = n0 * n;
    }
    return n;
}


