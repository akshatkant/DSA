#include <bits/stdc++.h>
using namespace std;


int reverse(string &s, int &n)
{
    stack <string> st;
    int i;
    for(int i=0;i<s.length();i++)
    {
        string word = "";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;                             
        }
        st.push(word);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

    
    
}

int main()
{
    string s = "hey! how do i look?";
    int n = s.length();
    reverse(s,n);

}