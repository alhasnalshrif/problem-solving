#include <iostream>

#include <fstream>

#include <string>
#include <vector>

using namespace std;

void loadDataFromFileVector(string fileName, vector<string> &vFileContent)
{

    fstream myFile;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string Line;
        while (getline(myFile, Line))
        {
            vFileContent.push_back(Line);
        }

        myFile.close();
    }
}

int main()
{

    vector<string> vFileContent;

    loadDataFromFileVector("myFile.txt", vFileContent);

    for (string &var : vFileContent)
    {
        cout << var << endl;
    }

    return 0;
}