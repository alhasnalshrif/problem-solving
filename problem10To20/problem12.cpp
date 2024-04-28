//#include <iostream>
//
//using namespace std;
//
//int ReadPositiveNumber(string Message)
//{
//    int Number = 0;
//    do
//    {
//        cout << Message << endl;
//        cin >> Number;
//    } while (Number <= 0);
//    return Number;
//}
//
//// int ReverseNumber(int Number)
//// {
////     int Remainder = 0, sum = 0;
//
////     while (Number > 0)
////     {
////         Remainder = Number % 10;
////         Number = Number / 10;
////         sum = sum * 10 + Remainder;
////     }
//
////     return sum;
//// }
//
//void printNumber(int reverse) {
//
//    // int reverse = ReverseNumber(Number);
//    
//    for (int i = 1; i <= reverse; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout<<i;
//        }
//        cout <<endl;
//        
//    }
//    
//}
//
//int main()
//{
//
//    printNumber(ReadPositiveNumber("Please enter a positive number?"));
//
//    return 0;
//}