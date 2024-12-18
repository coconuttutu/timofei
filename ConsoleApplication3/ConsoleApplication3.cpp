

#include <iostream>
using namespace std;


int main()
{   
    setlocale(LC_CTYPE, "RU");
    int a, b, c, n;
    cout << "Введите номер задания: ";
    cin >> n;
    switch (n) 
    {
    case 1:
    {
        cout << "Введите первое число: ";
        cin >> a;
        cout << endl;

        cout << "Введите второе  число: ";
        cin >> b;

        int max = a > b ? a : b;
        cout << "Максимальное число: " << max;
    }
    case 2:
    {
        a = 0;
        cout << "Введите  число: ";
        cin >> a;
        cout << endl;
        (a % 2 == 0) ? cout << "Число чётное" : cout << "Число нечётное";
 
    }

    case 3:
    {
        a = 0;
        cout << "Введите  число: ";
        cin >> a;
        cout << endl;
        (a > 0) ? cout << "Число положительное" : ( a < 0 ) ?  cout << "Число отрицательное " : cout << "Число равно нулю  ";
    }

    case 4: 
    {
        a = 0, b = 0, c = 0;
        cout << "Введите первое число: ";
        cin >> a;
        cout << endl;

        cout << "Введите второе  число: ";
        cin >> b;
        cout << endl;

        cout << "Введите третье  число: ";
        cin >> c;
        cout << endl;



        int max = (a > b) ?  (a > c) ? a : (b > c) ? c : b : b;
        cout << "Максимальное число: " << max;
    }


    }

  
}


