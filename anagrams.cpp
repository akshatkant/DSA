#include <bits/stdc++.h>
using namespace std;


string anagrams(string &str1,string &str2)
{
    unordered_set <char> uset;
    int count=0;
    for(int i=0;i<str1.size();i++)
    {
        uset.insert(str1[i]);
    }

    for(int i=0;i<str2.size();i++)
    {
        char c = str2[i];
        if(uset.find(c)!=uset.end())
        {
            count++;
        }
        c=0;

    }

    if(count>=str2.size())
    {
        return "Yes";
    }
    else{
        return "No";
    }

    
}

int main()
{
    string str1="silent";
    string str2="listen";
    cout<<anagrams(str1,str2);
}