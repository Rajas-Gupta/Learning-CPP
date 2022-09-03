#include <iostream>
using namespace std;
bool RatInMaze(char maze[][6],int sol[][10],int i,int j,int n,int m){
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
    if (j+1<m and maze[i][j+1]!='X' and sol[i][j+1]!=1)
    {
        bool kyarightseraastaMilla=RatInMaze(maze,sol,i,j+1,n,m);
        if(kyarightseraastaMilla==true){
            return true;
        }
    }
    // 2. Check Neeche se Raasta Milla? --> (i+1,j)
    if (i+1<n and maze[i+1][j] !='X' and sol[i+1][j]!=1)
    {
        bool kyaneecheseraastamilla=RatInMaze(maze,sol,i+1,j,n,m);
        if (kyaneecheseraastamilla==true)
        {
            return true;
        }
    }
    // 3. Check Backwards Se Raasta Milla? -->(i,j-1)
    if (j-1>=0 and maze[i][j-1]!='X' and sol[i][j-1]!=1)
    {
        bool kyabackwardsseraastamila=RatInMaze(maze,sol,i,j-1,n,m);
        if (kyabackwardsseraastamila==true)
        {
            return true;
        }
    }
    // 4. Check Upwards se Raasta Mila? -->(i-1,j)
    if (i-1>=0 and maze[i-1][j]!='X' and sol [i-1][j]!=1)
    {
        bool kyaupwardsseraastamila=RatInMaze(maze,sol,i-1,j,n,m);
        if (kyaupwardsseraastamila==true)
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
    char maze[][6]={
        "0X000",
        "0X0X0",
        "000X0",
        "XXXX0"
    };
    RatInMaze(maze,sol,0,0,4,5);
    return 0;
}