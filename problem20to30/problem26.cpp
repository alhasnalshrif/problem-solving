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
//int printSumArray(int arr[100], int arrayLength)
//{
//    int bigNum = 0;
//    for (int i = 0; i < arrayLength; i++)
//    {
//
//        bigNum += arr[i];
//    }
//    return bigNum;
//}
//
//int main()
//{
//
//    srand((unsigned)time(NULL));
//
//    int arr[100], arrayLength;
//
//    randomArray(arr, arrayLength);
//
//    printArray(arr, arrayLength);
//    cout << "Max Number is: " << printSumArray(arr, arrayLength)<<endl;
//
//    return 0;
//}