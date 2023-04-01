#include <bits/stdc++.h>
using namespace std;


char repeating(string &str,int &n)
{
    unordered_set <char> h;

    for(int i=0;i<n;i++)
    {
        char c = str[i];

        if(h.find(c)!=h.end())
        {
            return c;
        }
        else
        {
            h.insert(c);
        }
    }

    

}
int main()
{
    string str = "aabccdeef";
    int n =str.size();
    cout<<repeating(str,n);
}
