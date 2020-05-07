#include <iostream>
using namespace std;

//FIRST COLUMn
int getmax(int a, int b, int c)
{
    return max(a,max(b,c));
}
int maxGoldRec(int r, int c, int ** arr, int row, int col)
{   
    if(c>=col)return 0;
    if(r>=row || row<0) return 0;
    return arr[r][c] + getmax(maxGoldRec(r - 1, c + 1,arr,row,col), maxGoldRec(r, c + 1,arr,row,col), maxGoldRec(r + 1, c + 1,arr,row,col));
}
int maxGold(int **arr, int row, int col)
{
    int res = 0;
    for (int i = 0; i < row; i++)
    {
        res = max(maxGoldRec(i,0,arr,row,col), res);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >>col;
        int **arr = new int *[row];
        for (int i = 0; i < row; i++)
            arr[i] = new int[col];
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin >> arr[i][j];
        maxGold(arr,row,col);
    }
}