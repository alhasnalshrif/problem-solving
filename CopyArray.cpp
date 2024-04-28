#include <iostream>
#include <cstdlib>

using namespace std;

enum enPrimNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

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

void randomArray(int arr[100], int &arrayLength)
{
    cout << "Enter Number of elements\n";
    cin >> arrayLength;
    cout << "Enter array elements\n";

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

void duplcateArray(int arr[100], int arr2[100], int arrayLength, int &arr2len)
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (CheckPrime(arr[i]) == enPrimNotPrime::Prime)
        {
            arr2[arr2len] = arr[i];
            arr2len++;
        }
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrayLength;
    int arr2len = 0;
    randomArray(arr, arrayLength);

    duplcateArray(arr, arr2, arrayLength, arr2len);

    cout << "Array 1 elements \n";
    printArray(arr, arrayLength);
    cout << "Array 2 elements after copy \n";

    printArray(arr2, arr2len);

    return 0;
}