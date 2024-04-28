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

int PrintDigits(int Number, int DigitalCheck)
{
    int Remainder = 0, counter = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (Remainder == DigitalCheck)
        {
            counter++;
        }
    }

    return counter;
}

void PrintAllDigits(int Number)
{
    for (int i = 0; i < 9; i++)
    {
        short DigitalFrequency = 0;
        DigitalFrequency = PrintDigits(Number, i);

        if (DigitalFrequency > 0)
        {
            cout << i << " is " << DigitalFrequency << endl;
        }
    }
}

int main()
{

    int Number = ReadPositiveNumber("Please Enter a Positive Number?");

    PrintAllDigits(Number);

    return 0;
}