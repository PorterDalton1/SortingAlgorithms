#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream myFile;
    string data;
    int lyst[100000];
    int countLyst[100001] = {0};
    int counter;

    counter = 0;
    while (myFile >> data)
    {
        lyst[counter] = stoi(data);
        counter += 1;
    }

    for (int i = 0; i < counter; i++)
    {
        countLyst[lyst[i]] += 1;
    }

    for (int i = 0; i < counter; i++)
    {
        countLyst[i+1] = countLyst[i] + countLyst[i+1];
    }

    return 0;
}