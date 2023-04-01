#include <bits/stdc++.h>
#include <vector>
using namespace std;



int rotate(int a1[],int &n)
{
    int i;
    while(i<n)
    {
        a1[i]=a1[i-1];
    }
    a1[0]=a1[n-1];


    for(int i=0;i<n-1;i++)
    {
        cout<<a1[i]<<" ";
    }
}

int main()
{
    int a1[] = {12,23,4,5,2,3};
    int n = sizeof(a1)/sizeof(a1[0]);
    rotate(a1,n);
}
