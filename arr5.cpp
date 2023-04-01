#include <bits/stdc++.h>
#include <vector>
using namespace std;

int oneside (int a[],int &n)
{
    vector <int> v,w;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            int p=a[i];
            v.push_back(p);
        }

        if(a[i]<0)
        {
            int q=a[i];
            w.push_back(q);
        }

        
    }

    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

     
    for(int i=0;i<w.size();i++)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;

    //concatenate
    v.insert( v.end(),w.begin(),w.end() );

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}


int main()
{
    int a[] = {12,43,-54,32,-56,45,-6};
    int n = sizeof(a)/sizeof(a[0]);
    oneside(a,n);
}