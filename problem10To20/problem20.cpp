//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int RandomNumber(int from, int to)
//{
//    int randNum = rand() % (to - from + 1) + from;
//
//    return randNum;
//}
//
//enum enChar
//{
//    SmallLetter = 1,
//    CapitalLetter = 2,
//    SpictialCharacter = 3,
//    Digit = 4
//};
//
//char GetRandomCharachter(enChar enChar)
//{
//
//    switch (enChar)
//    {
//    case enChar::SmallLetter:
//        return char(RandomNumber(97, 122));
//        break;
//    case enChar::CapitalLetter:
//        return char(RandomNumber(65, 90));
//        break;
//    case enChar::SpictialCharacter:
//        return char(RandomNumber(33, 47));
//        break;
//    case enChar::Digit:
//        return char(RandomNumber(48, 57));
//        break;
//
//    default:
//        break;
//    }
//}
//
//int main()
//{
//
//    srand((unsigned)time(NULL));
//
//    cout << GetRandomCharachter(enChar::SmallLetter) << endl;
//    cout << GetRandomCharachter(enChar::CapitalLetter) << endl;
//    cout << GetRandomCharachter(enChar::SpictialCharacter) << endl;
//    cout << GetRandomCharachter(enChar::Digit) << endl;
//
//    return 0;
//}
