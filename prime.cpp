#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n<=0)
        {
            break;
        }
        else if(n%i==0)
            cout<<"prime"<<endl;
        else
            cout<<"Prime"<<endl;
    }
    
    
}