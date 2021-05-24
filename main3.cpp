#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char prevC, maxC;
    int max;
    string s;
    int n = 1;
    ifstream fin;
    fin.open("input.txt");
    getline (fin, s);
    prevC = s[0];
    maxC = s[0];
    max = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i-1])
        {
            n++;
        }
        else
        {
            if (n > max)
            {
                max = n;
                maxC = s[i - 1];
            }
            n = 1;
        }
        prevC = s[0];
    }
    if (n > max)
    {
        max = n;
        maxC = prevC;
    }
    cout << maxC << " " << max;
}
