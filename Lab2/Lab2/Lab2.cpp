#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string answr; 
    double res;
    int r;//створенняя трьох змінних. ансвр та р для
    //відповідей у консоль та рес для виведення результату
    
    cout << "Введіть радіус кола:" << endl;
    cin >> r; //введення данних радіусу

    cout << "Що саме вичислити?" << endl;
    cout << "Для площі кола введіть s" << endl;
    cout << "Для окружності введіть l" << endl;
    cout << "Для об'єму кулі введіть v" << endl;
    cin >> answr; //введення данних варіанту обчислень

    if (answr == "l") {
        res = 2 * M_PI * r;
    }
    else if(answr == "s") {
        res = M_PI * sqrt(r);
    }
    else if (answr == "v") {
        res = 3 % 4 * M_PI * pow(r,3);
    }
    else {
        cout << "помилка";
        return 0;
    } //Згідно відповідей проводиться вичислення площі,
    //окружності, або об'єму

    printf("Результат: %f", res);
    //виведення результатів у консоль
}
