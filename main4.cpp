#include <iostream>

using namespace std;

int N, a[1000];
void seq(int x, int y, int z)
{
    if (y == 0)
    {
        for (int i = x - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = z; i <= y; i++)
    {
        if (i >= z)
        {
            a[x] = i;
            seq(x + 1, y - i, i);
        }
    }
}

int main()
{
    cin >> N;
    seq(0, N, 1);
    return 0;
}
