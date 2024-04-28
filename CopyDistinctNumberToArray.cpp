//#include <iostream>
//using namespace std;
//
//// short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
//// {
////     for (int i = 0; i < arrLength; i++)
////     {
////         if (arr[i] == Number)
////             return i; // return the index
////     }                 // if you reached here, this means the number is not found
////     return -1;
//// }
//
//// bool IsNumberInArray(int Number, int arr[100], int arrLength)
//// {
////     return FindNumberPositionInArray(Number, arr, arrLength) != -1;
//// }
//
//// void addArrayElement(int num, int arr[100], int &arrLength)
//// {
////     arrLength++;
//
////     arr[arrLength - 1] = num;
//// }
//
//// void copyDistinNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
//// {
////     for (int i = 0; i < arrLength; i++)
////     {
////         if (!IsNumberInArray(arrSource[i], arrDestination, arrDestinationLength))
////         {
////             addArrayElement(arrSource[i], arrDestination, arrDestinationLength);
////         }
////     };
//// }
//
//void chekIsPalindormArray(int arr[100], int arrLen)
//{
//    int j = arrLen -1 ;
//    for (int i = 0; i < (arrLen / 2); i++)
//    {
//       
//        if (arr[i] != arr[j])
//        {
//            cout << "no array is not palndrion" << endl;
//            return ;
//        }
//     
//        j--;
//    }
//    cout << "yes array is palndrion" << endl;
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
//
//    int arr[100] = {10, 20, 30, 30, 20, 10}, arr2[100], arrLen = 6, arrLen2 = 0;
//
//    chekIsPalindormArray(arr, arrLen);
//
//    cout << "array lenght: " << arrLen << endl;
//
//    PrintArray(arr, arrLen);
//
//    return 0;
//}
//
// 
//#include<iostream>
//
//using namespace std;
//
//static int suming(int a, int b) {
//	int s = 0;
//	s = a + b;
//	return s;
//}
//
//int main() {
//	int arr1[5] = { 200,100,50,25,30 };
//	int a, b, c;
//
//	a = 10;
//	b = 20;
//
//	a++;
//	++b;
//	c = a + b;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	for (int i = 1; i <= 5; i++) {
//		cout << i << endl;
//		a = a + a * i;
//	}
//
//	c = suming(a, b);
//
//	cout << c;
//
//	return 0;
//}  
//
