#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[5] = { 3, 4, 1, 7, 5};
    int big = a[0];
    int i = 0;

    while (i <= 4) {
        if (a[i] > big) {
            big = a[i];
        }
        i++;
    }

    i = 0;
    while (i <= 4) {
        a[i] = big;
        i++;
    }

    while (i <= 4) {
        cout<<a[i];
        i++;
    }


    
}