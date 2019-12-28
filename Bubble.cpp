#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Just adding a comment
void bubbleSort(int &, int);


int main()
{
    string data;
    ifstream myFile;
    int counter = 0;
    int lines[100000];
    bool sorted = false;
    int tmp;

    myFile.open("randomRepeat.txt");


    while (myFile >> data)
    {
        lines[counter] = stoi(data);
        counter += 1;
    }

    while (!(sorted))
    {
        sorted = true;
        for (int i = 0; i < (counter - 1); i++)
        {
            if (lines[i] > lines[i + 1])
            {
                tmp = lines[i+1];
                lines[i+1] = lines[i];
                lines[i] = tmp;
                sorted = false;

            }
        }
    }

    for (int e = 0; e < counter; e++)
    {
        cout << lines[e] << endl;
    }

    myFile.close();
    return 0;
}