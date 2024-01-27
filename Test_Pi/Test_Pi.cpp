#include <random>
#include <iostream>
#include <Windows.h>
#define PI 3.14f

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");

    cout << PI << endl;

    unsigned char symbol;

    cin >> symbol;

    if (symbol >= '0' && symbol <= '9')
    {
        cout << "Число";
    } else if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') ||
        (symbol >= 'а' && symbol <= 'я') || (symbol >= 'А' && symbol <= 'Я') ||
        (symbol == 'ё' || symbol == 'Ё'))
    {
        cout << "Буква"; 
    }  else
    {
        switch (symbol)
        {
        case ',':
        case '-':
        case '.':
        case ';':
        case '\'':
        case '(':
        case ')':
        case '"':
            cout << "Знак препинания";
            break;
        default:
            cout << "Другое";
            break;
        }
    }

    cin >> symbol;
   
    return 0;
}
