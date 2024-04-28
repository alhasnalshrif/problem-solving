//#include <iostream>
//
//using namespace std;
//
//// int main(){
//// int n;
//// cin >> n ;
////   string stingy = to_string(n);
////   for (int i = stingy.size(); i >= 0; i--)
////   {
////     cout << stingy[i]<< endl;
////   }
//// }
//
//int ReadPositiveNumber(string Message)
//{
//    int Number = 0;
//
//    do
//    {
//        cout << Message << endl;
//        cin >> Number;
//    } while (Number <= 0);
//    return Number;
//}
//
//int PrintSumDigits(int Number,int DigitalCheck)
//{
//    int Remainder = 0,counter = 0;
//
//    while (Number > 0)
//    {
//        Remainder = Number % 10;
//        Number = Number / 10;
//
//        if (Remainder == DigitalCheck)
//        {
//            counter++;
//        }
//        
//    }
//
//    return counter;
//}
//
//int main()
//{
//
//    int Number = ReadPositiveNumber("Please Enter a Positive Number?");
//
//    short DigitalCheck = ReadPositiveNumber("Please Enter a Positive Number?");
//
//  cout << DigitalCheck <<"  " <<PrintSumDigits(Number , DigitalCheck) ;
//
//    return 0;
//}