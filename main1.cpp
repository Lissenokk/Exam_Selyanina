#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int k, m, d;
    int qty = 0;
    int max = 0;
    cin >> a >> b;
    for (int i = b; i >=a; i--)
    {
        k = i;
        m = 0;
        if ((k % 10) != 0)
        {
            if ((k % 2) == 0)
            {
                while (k > 0)
                {
                    m = m + (k % 2);
                    k = k / 2;
                    if (m > 5)
                    {
                        break;
                    }
                }
                if (m == 5)
                {
                    if (qty == 0)
                        max = i;
                    qty++;
                }
            }
        }
    }
    if (qty == 0)
    {
        cout << 0 << " " << 0;
    }
    else
        cout << qty << " " << max;
}
