#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
*/

/* //hollow rectangle
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            
        if (i == 1 || i == 3 || j == 1 || j == 5)

            cout << '*';

        else

            cout << ' ';
        }
        cout << endl;
    }
}

*/


int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<8;j=j+1)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}