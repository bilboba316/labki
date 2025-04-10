#include <iostream>
#include <math.h>
using namespace std;
void aboba(int massive[]) {
}

int main()
{   
    int massive[25];


    for (int i = 1; i < 25; ++i) {
        int k = 4;
        int a = 5*k+rand()%(10*k - (5*k+1));
        massive[i - 1] = a;
    }

    for (int ia = 0; ia < 4; ++ia) {
        int queue = 0;
        for (int ib = 0; ib < 4; ++ib) {
            cout << "[";
            queue++;
        }
    }

}

void aboba(int massive[]) {
    int size = sqrt(sizeof(massive) / sizeof(massive[0]));
    int** array = new int* [size];

    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size];
    }

    for (int i = 0; i < 4; i++)
    {
        int a = 0;
        for (int j = 0; j < size; j++)
        {
            array[a][i] = massive[i];
            a++;
        }
    }
}


