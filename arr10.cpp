#include <bits/stdc++.h>
using namespace std;




int jumping(int a[],int &n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        while(temp>0)
        {
            
            i=i+1;
            temp--;
            
        }
        count++;
       
    }

     cout<<count;   
}

int main()
{
    int k;
    int a[] = { 1, 4, 3, 2, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
     jumping(a,n);
}