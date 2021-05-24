#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    stack <int> stackS;
    string s;
    int x, y;
    int p;
    string s1;
    string oper = "+-*/";
    getline(cin, s);

    while (s != "")
    {
        p = s.find(' ');
        if (p > 0)
        {
            s1 = s.substr(0, p);
            s = s.erase(0, p+1);
        }
        else
        {
            s1 = s;
            s = "";
        }
        p = oper.find(s1);
        if (p >= 0)
        {
            if (stackS.size() < 2)
            {
                cout << "ERROR";
                return 0;
            }
        }
        switch (s1[0])
        {
            case '+':
            x = stackS.top();
            stackS.pop();
            y = stackS.top();
            stackS.pop();
            x = x + y;
            stackS.push(x);
            break;
            case '*':
            x = stackS.top();
            stackS.pop();
            y = stackS.top();
            stackS.pop();
            x = x * y;
            stackS.push(x);
            break;
            case '-':
            x = stackS.top();
            stackS.pop();
            y = stackS.top();
            stackS.pop();
            x = y - x;
            stackS.push(x);
            break;
            case '/':
            x = stackS.top();
            stackS.pop();
            y = stackS.top();
            stackS.pop();
            x = y / x;
            stackS.push(x);
            break;
            default:
                stackS.push(atoi(s1.c_str()));
            break;
        }
    }
    if (stackS.size() == 1)
        cout << stackS.top();
    else
        cout << "ERROR";
    return 0;

}
