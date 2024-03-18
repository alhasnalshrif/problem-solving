#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber()
{
    int Number = 0;

    do
    {
        cout << "enter numper bigger than 0" << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int randomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void randomArray(int arr[100], int arrayLength)
{
    // cout << "Enter Number of elements\n";
    // cin >> arrayLength;
    // cout << "Enter array elements\n";

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
    cout << endl;
}

void printArray(int arr[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void duplcateArray(int arr[100], int arr2[100], int arrayLength)
// {
//     for (int i = 0; i < arrayLength; i++)
//     {

//         arr2[i] = arr[i];
//     }
//     cout << endl;
// }

void sum2Array(int arr[100], int arr2[100], int arr3[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {

        arr3[i] = arr2[i] + arr[i];
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrayLength, arr3[100];

    arrayLength = ReadPositiveNumber();
    randomArray(arr, arrayLength);

    randomArray(arr2, arrayLength);

    sum2Array(arr, arr2, arr3, arrayLength);

    cout << "Array 1 elements \n";
    printArray(arr, arrayLength);
    cout << "Array 2 elements after copy \n";

    printArray(arr2, arrayLength);

    cout << "Suming 2 array \n";

    printArray(arr3, arrayLength);

    return 0;
}