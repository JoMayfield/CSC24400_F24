#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s1 = "";
    string s2 = "";
    int i1 = 0;

    ifstream fin;
    fin.open("input.txt");

    getline(fin, s1);

    fin >> i1;

    getline(fin, s2);

    cout << s1 << endl;
    cout << i1 << endl;
    cout << s2 << endl;

    return 0;
}