//#include <iostream>
//
//using namespace std;
//
//string read_string()
//{
//    string word;
//    cout << "please Enter the Text\n";
//    getline(cin, word);
//
//    return word;
//}
//
//string encrypting(string n)
//{
//    string word = "";
//    for (int i = 0; i <= n.length(); i++)
//    {
//        word = word + (char((int)n[i] + 2));
//    }
//    cout << word << endl;
//    return word;
//}
//
//void decrypting(string n)
//{
//    string word = "";
//    for (int i = 0; i <= n.length(); i++)
//    {
//        word = word + (char((int)n[i] - 2));
//    }
//    cout << word << endl;
//    // return word;
//}
//
//int main()
//{
//
//    decrypting(encrypting(read_string()));
//
//    return 0;
//}