#include <bits/stdc++.h>
using namespace std;

int stock (int a[] , int n)
{
    int p;
    int min=a[0];
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            p=i;
        }
    }

    for(int i=p+1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<max-min<<endl;

    

}


int main()
{
    int a[] = {1,2};
    int n = sizeof(a)/sizeof(a[0]);
    stock(a,n);
}