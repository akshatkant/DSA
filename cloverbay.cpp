#include <bits/stdc++.h>
using namespace std;

void unique(string &str,int &n)
{
    map <char,int> mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }

    for(auto i: mp)
    {
        if(i.second==1)
        {
            if(count<=1)
            {
                cout<<i.first;
                
            }
            else
            {
                break;
            }
        }
        count++;
    }

}
int main()
{
    string str = "abscdefa";
    int n = str.length();
    unique(str,n);
}