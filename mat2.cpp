//https://leetcode.com/problems/search-a-2d-matrix/submissions/
//watch this
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m=3,n=3;
    int a[m][n];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    

     for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(a[i][j]==9)
           {
             cout<<"Element found at row "<<i<<"th and column "<<j<<"th"<<endl;
           }
        }
        cout<<endl;
    }
}