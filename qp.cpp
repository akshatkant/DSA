#include <bits/stdc++.h>
using namespace std;

int max(int a[],int n)
{
    int i;
    while(i<n-1)
    {
        if(a[i]>a[i+1])
        {
            cout<<a[i]<<" ";
        }
        else
        {
            cout<<a[i+1]<<" ";
        }
        i++;
        
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    max(a,n);

}