//#include <iostream>
//
//using namespace std;
//
//bool printNumber(string n)
//{
//    int counter = 0;
//    string word = "";
//    for (int i = 65; i <= 90; i++)
//    {
//        for (int j = 65; j <= 90; j++)
//        {
//            for (int k = 65; k <= 90; k++)
//            {
//                counter++;
//                word = word + char(i);
//                word = word + char(j);
//                word = word + char(k);
//                cout << word << endl;
//                if (word == n)
//                {
//                    cout << "password is " << word << endl;
//                    cout << "Found after " << counter << " Trials";
//
//                    return true;
//                }
//
//                word = "";
//                // cout << char(i)<<char(j) << char(k)<<endl;
//            }
//        }
//
//        cout << endl;
//    }
//    return false;
//}
//
//int main()
//{
//    string n;
//    cin >> n;
//
//    // cout << "Found after " << printNumber(n) << " Trials";
//
//    printNumber(n);
//
//    return 0;
//}