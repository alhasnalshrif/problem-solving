//#include <iostream>
//using namespace std;
//
//int RandomNumber(int From, int To)
//{
//    // Function to generate a random number
//    int randNum = rand() % (To - From + 1) + From;
//    return randNum;
//}
//
//enum enPrimNotPrime
//{
//    Prime = 1,
//    NotPrime = 2
//};
//
//enPrimNotPrime CheckPrime(int Number)
//{
//    int M = round(Number / 2);
//    for (int Counter = 2; Counter <= M; Counter++)
//    {
//        if (Number % Counter == 0)
//            return enPrimNotPrime::NotPrime;
//    }
//    return enPrimNotPrime::Prime;
//}
//
//void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
//{
//    cout << "\nEnter number of elements:\n";
//    cin >> arrLength;
//    for (int i = 0; i < arrLength; i++)
//        arr[i] = RandomNumber(1, 100);
//}
//
//int ReadNumber()
//{
//
//    int Number;
//    cout << "\nPlease enter a number to search for?\n";
//    cin >> Number;
//    return Number;
//}
//void addArrayElement(int num, int arr[100], int &arrLength)
//{
//    arrLength++;
//
//    arr[arrLength - 1] = num;
//}
//
//void copyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
//{
//    for (int i = 0; i < arrLength; i++)
//        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
//        {
//            addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
//        }
//}
//
//void PrintArray(int arr[100], int arrLength)
//{
//    for (int i = 0; i < arrLength; i++)
//        cout << arr[i] << " ";
//    cout << "\n";
//}
//
//int main()
//{
//    srand((unsigned)time(NULL));
//
//    int arr[100], arr2[100], arrLen = 0, arrLen2 = 0;
//
//    FillArrayWithRandomNumbers(arr, arrLen);
//
//    copyOddNumbers(arr, arr2, arrLen, arrLen2);
//
//    cout << "array lenght: " << arrLen << endl;
//
//    PrintArray(arr, arrLen);
//    cout << "array lenght: " << arrLen << endl;
//
//    PrintArray(arr2, arrLen2);
//
//    return 0;
//}
//
//    // int arr[100]={10,10,10,50,50,70,70,70,70,90}, arr2[100], arrLen = 1, arrLen2 = 0;
//// 

//#include<iostream>
//
//using namespace std;
//
//int RandomNumber(int From, int To) {
//	//Function to generate a random number
//	int randNum = rand() % (To - From + 1) + From; return randNum;
//}
//void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
//{
//	cout << "\nEnter number of elements:\n";
//	cin >> arrLength;
//	for (int i = 0; i < arrLength; i++) arr[i] = RandomNumber(1, 100);
//}
//
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
//
//void AddArrayElement(int Number, int arr[100], int& arrLength) {
//	//its a new element so we need to add the length by 1
//	arrLength++; arr[arrLength - 1] = Number;
//}
//
//
//void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength) {
//	for (int i = 0; i < arrLength; i++) if (arrSource[i] % 2 != 0) { AddArrayElement(arrSource[i], arrDestination, arrDestinationLength); }
//}
//
//int main() {
//	//Seeds the random number generator in C++, called only once   
//	srand((unsigned)time(NULL)); int arr[100], arrLength = 0, arr2Length = 0;
//	FillArrayWithRandomNumbers(arr, arrLength); int arr2[100];
//	CopyOddNumbers(arr, arr2, arrLength, arr2Length);
//	cout << "\nArray 1 elements:\n";
//	PrintArray(arr, arrLength);
//	cout << "\nArray 2 Odd numbers:\n";
//	PrintArray(arr2, arr2Length);
//	return 0;
//}
//
//
