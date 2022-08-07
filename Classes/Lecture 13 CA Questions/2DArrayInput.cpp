#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    cout<<"Enter Rows And Colums: ";
    int n,m;
    cin>>n>>m;
    int number=1;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            // cin>>arr[r][c];
            arr[r][c]=number;
            number++;
        }
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m;c++)
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}