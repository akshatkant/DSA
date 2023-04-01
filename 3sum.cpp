#include <bits/stdc++.h>
using namespace std;


int threesum(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    
                    
                }
            }
        }
    }
}

int main()
{
    int a[] = { -1,0,1,2,-1,-4 };
    int n = sizeof(a)/sizeof(a[0]);
    threesum(a,n);
}