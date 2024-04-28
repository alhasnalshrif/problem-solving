#include <iostream>
using namespace std;

void chekIsPalindormArray(int arr[100], int arrLen)
{
    int j = arrLen - 1;
    for (int i = 0; i < (arrLen / 2); i++)
    {

        if (arr[i] != arr[j])
        {
            cout << "no array is not palndrion" << endl;
            return;
        }

        j--;
    }
    cout << "yes array is palndrion" << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{

    int arr[100] = {10, 20, 30, 30, 20, 10}, arr2[100], arrLen = 6, arrLen2 = 0;

    chekIsPalindormArray(arr, arrLen);

    cout << "array lenght: " << arrLen << endl;

    PrintArray(arr, arrLen);

    return 0;
}

//