//string "ab!=yz" then the output should be zyba

#include <bits/stdc++.h>
using namespace std;

string stringfun(string &str, int &n)
{
    vector <char> vp;
    stack <char> st;
    for(int i=0;i<n;i++)
    {
        st.push(str[i]);
    }

    while(!st.empty())
    {
        if((st.top()>='a' && st.top()<='z') || (st.top()>='A' && st.top()<='Z'))
        {
             vp.push_back(st.top());
             st.pop();
        }
        else
        {
            st.pop();
        }
    }

    for(int i=0;i<vp.size();i++)
    {
        cout<<vp[i]<<" ";
    }
}

int main()
{
    string str = "abc!=def";
    int n = str.length();
    stringfun(str,n);
}

