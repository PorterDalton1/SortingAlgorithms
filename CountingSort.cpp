#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream myFile;
    string data;
    int lyst[100000];
    int sortedLyst[100000];
    int countLyst[1001] = {0};
    int counter;
    int index;

    myFile.open("inputForCount.txt");

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

    for (int i = 0; i < 1000; i++)
    {
        countLyst[i+1] = countLyst[i] + countLyst[i+1];
    }
    

    for (int i = 0; i < counter; i++)
    {
        //I can't tell you how long this took me to figure out
        sortedLyst[countLyst[lyst[i]]] = lyst[i];
        countLyst[lyst[i]] -= 1; 
    }

    for (int i = 0; i < counter; i++)
    {
        cout << sortedLyst[i] << endl;
    }
    return 0;
}