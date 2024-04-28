//#include <iostream>
//
//using namespace std;
//
//// int main(){
//
//// int n;
//
//// cin >> n ;
//
////   string stingy = to_string(n);
//
////   for (int i = stingy.size(); i >= 0; i--)
////   {
////     cout << stingy[i]<< endl;
////   }
//
//// }
//
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
//int PrintSumDigits(int Number){
//    int Remainder = 0,sum = 0 ;
//
//    while (Number >0)
//    {
//       Remainder = Number % 10;
//       Number = Number / 10 ;
//
//       sum = sum + Remainder;
//    }
//    
//return sum;
//
//}
//
//
//int main(){
//
//
//   cout << PrintSumDigits(ReadPositiveNumber("Please Enter a Positive Number?"))<<endl;
//
//    return 0;
//
//}