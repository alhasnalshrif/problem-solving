#include <iostream>
using namespace std;

void userAddNumbeInArray(int arr[100], int &arrLen)
{
    bool check = true;

    do
    {
        addArrayElement(ReadNumber(), arr, arrLen);

        cout << "\nDo you want add more number? [0]No, [1]yes?  ";

        cin >> check;
    } while (check);
}
void addArrayElement(int num, int arr[100], int arrLen)
{
    arr[arrLen] = num;
    arrLen++;
}

int ReadNumber()
{

    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[100], arrLen;

    userAddNumbeInArray(arr, arrLen);

    cout << "array lenght: " << arrLen << endl;

    PrintArray(arr, arrLen);

    return 0;
}
