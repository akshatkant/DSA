#include <bits/stdc++.h>
using namespace std;



bool ispair(int a[], int n,int x)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i==j)
            {
                continue;
            }

            if(a[i]+a[j]==x)
                return true;

            else if(a[i]+a[j] > x)
            {
                break;
            }
        }
    }

    return false;



}

int main()
{
    int a[10] = {2, 3, 5, 8, 9, 10, 11};
    int val = 17;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    cout<<ispair(a,n,val);
}