#include <bits/stdc++.h>
using namespace std;

int merge(int a[],int b[],int &n,int &n2)
{

    sort(a,a+n);
    sort(b,b+n2);
    int temp[10];
    for(int i=0;i<n;i++)
    {
        temp[i] = a[i];
    }

    int k = n+n2;

    for(int i=0;i<n2;i++)
    {
        temp[i+n]=b[i];
    }
    
    
   
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }

}
int main()
{
    int a[] = { 1,3,2,4,6,5};
    int b[] = {9,8,7,10,12,11};
    int n = sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    merge(a,b,n,n2);
}