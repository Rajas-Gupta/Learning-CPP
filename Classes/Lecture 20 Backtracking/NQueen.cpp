#include <iostream>
using namespace std;
bool isSafe(int board[][100],int i,int j,int n){
    int l=i,m=j;
    for (int k = 0; k < n; k++)
    {
        if (board[k][j]==1 || board[i][k]==1)
        {
            return false;
        }
    }
    //Check Upper Right Diagnol
    while (i>=0 and j<n)
    {
        if (board[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }
    //Check Upper Left Diagnol
    while (l>=0 and m>=0)
    {
        if (board[l--][m--])
        {
            return false;
        }
    }
    return true;
}
bool NQueen(int board[][100],int i,int n){
    //Base Case
    if (i==n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                //cout<<board[i][j]<<" ";
                board[i][j]==1 ? cout<<"Q": cout<<"_";
            }
            cout<<endl;
        }
        cout<<endl;
        //return true;      //For One Output
        return false;   //For Multiple output
    }
    //Recursive Case
    //Har Column per jao ith row ke
    for (int j = 0; j < n; j++)
    {
        //Check Karlo Jis Cell par ho waha queen rakhna safe hai ya nhi
        if (isSafe(board,i,j,n)==true)
        {
            board[i][j]=1;
            //Ab Baaki n-1 queens recursion ko pucho
            bool KyaBaakiPlaceHui=NQueen(board,i+1,n);
            if (KyaBaakiPlaceHui)
            {
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}
int main()
{
    int board[100][100];
    NQueen(board,0,4);
    return 0;
} 