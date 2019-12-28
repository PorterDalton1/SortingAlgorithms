#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int lyst[100000];
    ifstream myFile;
    string data;
    int counter = 0;
    int lowest[2];
    int tmp;

    myFile.open("input2.txt");
    
    while (myFile >> data)
    {
        lyst[counter] = stoi(data);
        counter += 1;
    }

    for (int i = 0; i < counter; i++)
    {
        lowest[0] = lyst[i];
        lowest[1] = i;
        for (int e = i+1; e < counter; e++)
        {
            if (lowest[0] > lyst[e])
            {
                lowest[0] = lyst[e];
                lowest[1] = e;
            }
        }

        tmp = lyst[i];
        lyst[i] = lowest[0];
        lyst[lowest[1]] = tmp;
    }

    for (int i = 0; i < counter; i++)
    {
        cout << lyst[i] << endl;
    }

    return 0;
}