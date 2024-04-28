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

int PrintReverseDigits(int Number)
{
    int Remainder = 0, sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        sum = sum * 10 + Remainder;
    }

    return sum;
}

int main()
{

    cout << PrintReverseDigits(ReadPositiveNumber("Please Enter a Positive Number?")) << endl;

    return 0;
}