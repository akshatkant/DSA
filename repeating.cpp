#include <bits/stdc++.h>
using namespace std;


char repeating( char str[],int &n)
{
    set <char> uset;
 

    for(int i=0;i<n;i++)
    {
       uset.insert(str[i]);
        
    }


/*     for(int i=0;i<n;i++)
    {
        char c = str[i];
        if(uset.find(c)!=uset.end())
        {
            cout<<c<<" ";
        }
        c=0;
    }

*/    
    for (auto it = uset.begin(); it !=  uset.end(); it++)
    {
       cout << *it<<endl;
    }
    
    

    

}
int main()
{
    char str[] ={'a','a','b','c','c','d','e','f'};
    int n =sizeof(str)/sizeof(str[0]);
    cout<<repeating(str,n);
}

