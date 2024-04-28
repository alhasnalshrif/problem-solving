#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

int ReadNumber()
{

    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}
void addArrayElement(int num, int arr[100], int &arrLength)
{
    arrLength++;

    arr[arrLength - 1] = num;
}

void copyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        if (arrSource[i] % 2 != 0)
        {
            addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrLen = 0, arrLen2 = 0;

    FillArrayWithRandomNumbers(arr, arrLen);

    copyOddNumbers(arr, arr2, arrLen, arrLen2);

    cout << "array lenght: " << arrLen << endl;

    PrintArray(arr, arrLen);
    cout << "array lenght: " << arrLen << endl;

    PrintArray(arr2, arrLen2);

    return 0;
}
