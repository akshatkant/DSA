#include <bits/stdc++.h>
using namespace std;


string repeat(string str,int &n)
{
    vector<pair<int,char>> vp; 
    unordered_map <char,int> mp;
  

    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }

    for(auto i:mp)
    {
        vp.push_back({i.second,i.first});
    }

    sort(vp.begin(),vp.end());

    char b = vp[vp.size()-1].second;

    for(int i = 0;i<str.size();i++)
    {
        if(str[i]==b)
        {
            str[i]='j';
        }
    }
    return str;

}

int main()
{
    string str = "bbadbbababb";
    int n = str.length();
    cout<<repeat(str,n);
}