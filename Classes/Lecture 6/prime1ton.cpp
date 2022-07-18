#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        bool b = true;
        int j = 2;
        while (j <= i - 1)
        {
            if (i % j == 0)
            {
                b = false;
                break;
            }
            j++;
        }
        if (b)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}