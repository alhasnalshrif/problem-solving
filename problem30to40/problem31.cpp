//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//void swap(int &A, int &B)
//{
//    int Temp;
//    Temp = A;
//    A = B;
//    B = Temp;
//}
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
//void fillArray(int arr[100], int arrayLength)
//{
//
//    for (int i = 0; i < arrayLength; i++)
//    {
//        arr[i] = i + 1;
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
//void shuffleArray(int arr[100], int arrayLength)
//{
//
//    for (int i = 0; i < arrayLength; i++)
//    {
//        swap(arr[randomNumber(1, arrayLength) - 1], arr[randomNumber(1, arrayLength) - 1]);
//    }
//    cout << endl;
//}
//
//int main()
//{
//
//    srand((unsigned)time(NULL));
//
//    int arr[100], arrayLength;
//
//    arrayLength = ReadPositiveNumber();
//    fillArray(arr, arrayLength);
//
//    cout << "Array 1 elements \n";
//    printArray(arr, arrayLength);
//
//    shuffleArray(arr, arrayLength);
//
//    cout << "Array 2 elements after copy \n";
//
//    printArray(arr, arrayLength);
//
//    return 0;
//}