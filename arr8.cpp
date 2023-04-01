#include <bits/stdc++.h>
using namespace std;


int kadane(int a[],int n)
{
    int sum=0,temp=0,pemp;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    
    for(int i=0; i<n ;i++)
    {

        temp=temp+a[i];
        if(temp>sum)
        {
            pemp=temp;
        }

         
    }
    
     cout<<pemp<<endl;
}

int main()
{
    int a[] = { 1, 2, 3, -2, -5 };
    int n = sizeof(a)/sizeof(a[0]);
    kadane(a,n);
}