#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void printNumber(int reverse)
{

    // for (int i = reverse; i >= 1; i--)
    for (int i = 1; i <= reverse; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // char x = i+64;
            cout << char(i + 64);
            // cout<< i+64;
        }
        cout << endl;
    }
}

int main()
{

    printNumber(ReadPositiveNumber("Please enter a positive number?"));

    return 0;
}