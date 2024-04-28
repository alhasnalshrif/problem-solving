#include <iostream>

#include <fstream>

#include <string>

using namespace std;

void printFileContent(string fileName)
{

    fstream myFile;

    myFile.open(fileName, ios::in);

    if (myFile.is_open())
    {
        string Line;
        while (getline(myFile, Line))
        {
            cout << Line << endl;
        }

        myFile.close();
    }
}

int main()
{

    printFileContent("myFile.txt");

    return 0;
}