#include <bits/stdc++.h>
#include <vector>
using namespace std;



int reversefn(int &n)
{
    int v[10];
    for(int  i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int start = 0;
    int end = n-1;
    while(start<end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }

    for(int  i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    reversefn(n);
    
}