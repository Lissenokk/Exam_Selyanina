#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    int d;
    int f = 0;
    int q;
    int k;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if ((i % 2) == 0)
        {
            d = 1;
            q = round(sqrtf(i));
            for (int j = 2; j <= q; j++)
            {
                if ((i % j) == 0)
                {
                    if ((j % 2) == 0)
                    {
                        d++;
                    }
                    k = i/j;
                    if (((k % 2) == 0) && (j != k))
                    {
                        d++;
                    }
                    if (d > 3)
                        break;
                }
            }
            if (d == 3)
            {
                f = 1;
                cout << i << endl;
            }
        }
    }
    if (f == 0)
        cout << 0;
}
