//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int ReadPositiveNumber()
//{
//    int Number = 0;
//
//    do
//    {
//        cout << "enter numper bigger than 0" << endl;
//        cin >> Number;
//    } while (Number <= 0);
//    return Number;
//}
//
//int randomNumber(int From, int To)
//{
//    int randNum = rand() % (To - From + 1) + From;
//    return randNum;
//}
//
//void randomArray(int arr[100], int &arrayLength)
//{
//    cout << "Enter Number of elements\n";
//    cin >> arrayLength;
//    cout << "Enter array elements\n";
//
//    for (int i = 0; i < arrayLength; i++)
//    {
//        arr[i] = randomNumber(1, 100);
//    }
//    cout << endl;
//}
//
//void printArray(int arr[100], int arrayLength)
//{
//    for (int i = 0; i < arrayLength; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void reverseArray(int arr[100], int arr2[100], int arrayLength)
//{
//
//    for (int i = 0; i < arrayLength; i++)
//    {
//
//        arr2[arrayLength - 1 - i] = arr[i];
//    }
//}
//
//int main()
//{
//
//    srand((unsigned)time(NULL));
//
//    int arr[100], arr2[100], arrayLength;
//
//    randomArray(arr, arrayLength);
//
//    reverseArray(arr, arr2, arrayLength);
//
//    printArray(arr, arrayLength);
//
//    printArray(arr2, arrayLength);
//
//    return 0;
//}