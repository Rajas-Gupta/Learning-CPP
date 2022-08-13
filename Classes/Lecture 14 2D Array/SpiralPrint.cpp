#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int arr[10][10];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int rs = 0, re = n - 1, cs = 0, ce = m - 1;
    while (rs <= re && cs <= ce)
    {
        // Print First Row
        for (int i = cs; i <= ce; i++)
        {
            cout << arr[rs][i] << ", ";
        }
        rs++;
        // Print Last Column
        for (int i = rs; i <= re; i++)
        {
            cout << arr[i][ce] << ", ";
        }
        ce--;
        // Print Last Row
        if (rs <= re)
        {
            for (int i = ce; i >= cs; i--)
            {
                cout << arr[re][i] << ", ";
            }
        }
        re--;
        if (cs <= ce)
        {
            for (int i = re; i >= rs; i--)
            {
                cout << arr[i][cs] << ", ";
            }
        }
        cs++;
    }
    cout << "END";
    return 0;
}