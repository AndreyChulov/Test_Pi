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
        cout << "�����";
    } else if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') ||
        (symbol >= '�' && symbol <= '�') || (symbol >= '�' && symbol <= '�') ||
        (symbol == '�' || symbol == '�'))
    {
        cout << "�����"; 
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
            cout << "���� ����������";
            break;
        default:
            cout << "������";
            break;
        }
    }

    cin >> symbol;
   
    return 0;
}
