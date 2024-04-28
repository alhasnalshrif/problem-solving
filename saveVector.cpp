#include <iostream>

#include <fstream>

#include <string>
#include <vector>

using namespace std;

void saveVectorToFile(string fileName, vector<string> vFileContent)
{

    fstream myFile;

    myFile.open(fileName, ios::out);

    if (myFile.is_open())
    {
        for (string &line : vFileContent)
        {
            if (line != "")
            {
                myFile << line << endl;
            }
        }

        myFile.close();
    }
}

int main()
{

    vector<string> vFileContent{"alhasn ", "alshrif", "fahmy", "sara", "not Now"};

    saveVectorToFile("myFile.txt", vFileContent);

    return 0;
}