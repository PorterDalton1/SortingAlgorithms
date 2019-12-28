#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream myFile;
    string data;
    int lyst[100000];
    int counter;
    int tmp;
    myFile.open("randomRepeat.txt");

    counter = 0;
    while (myFile >> data)
    {
        lyst[counter] = stoi(data);
        counter += 1;
    }

    for (int i = 1; i < counter; i++)
    {
        for (int e = i; e > 0; e--)
        {
            if (lyst[e] < lyst[e - 1])
            {
                tmp = lyst[e];
                lyst[e] = lyst[e-1];
                lyst[e-1] = tmp;
            }
            else
            {
                break;
            }
        }
    }
    for (int z = 0; z < counter; z++)
    {
        cout << lyst[z] << endl;
    }

    return 0;
}