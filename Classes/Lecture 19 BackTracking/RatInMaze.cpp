#include <iostream>
using namespace std;
bool RatInMaze(char maze[][5],int sol[][10],int i,int j,int n,int m){
    //Base Case
    if (i==n-1 and j==m-1)
    {
        sol[i][j]=1;
        for (int k = 0; k <n ; k++)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<sol[k][i]<<" ";
            }
            cout<<endl;
        }
        //return true;  For One Way
        cout<<endl;
        return false; //For Multiple Ways
    }
    //Recursive Case
    sol[i][j]=1;  //Hoskta hai i,j solution ka parrt ho

    // 1. Check Right Se Raasta Milla? -->(i,j+1)
    if (j+1<m and maze[i][j+1]!='X')
    {
        bool kyarightseraastaMilla=RatInMaze(maze,sol,i,j+1,n,m);
        if(kyarightseraastaMilla==true){
            return true;
        }
    }
    // 2. Check Neeche se Raasta Milla? --> (i+1,j)
    if (i+1<n and maze[i+1][j] !='X')
    {
        bool kyaneecheseraastamilla=RatInMaze(maze,sol,i+1,j,n,m);
        if (kyaneecheseraastamilla==true)
        {
            return true;
        }
    }
    sol[i][j]=0;
    return false;
}
int main()
{
    int sol[10][10]={0};
    char maze[][5]={
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    RatInMaze(maze,sol,0,0,4,4);
    return 0;
}