#include <bits/stdc++.h>
#include <vector>
using namespace std;



int maxmin(int &n)
{
    int a[10],max=0,min=a[0];
    for(int  i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int  i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

        if(a[i]<min)
        {
            min=a[i];
        }
        
    }

    cout<<max<<" "<<min<<endl;

}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    maxmin(n);
    
}