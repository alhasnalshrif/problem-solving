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
//void readArray(int arr[100], int &arrayLength)
//{
//    cout << "Enter Number of elements\n";
//    cin >> arrayLength;
//    cout << "Enter array elements\n";
//
//    for (int i = 0; i < arrayLength; i++)
//    {
//        cout << "Element [" << i + 1 << "] : ";
//        cin >> arr[i];
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
//int repeatTimes(int num, int arr[100], int arrayLength)
//{
//    int count = 0;
//    for (int i = 0; i < arrayLength; i++)
//    {
//        if (num == arr[i])
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//
//    int arr[100], arrayLength, checkNum;
//
//    readArray(arr, arrayLength);
//
//    checkNum = ReadPositiveNumber();
//
//    printArray(arr, arrayLength);
//    cout << checkNum << " Is Rebpeated " << repeatTimes(checkNum, arr, arrayLength) << " Times" << endl;
//
//    return 0;
//}