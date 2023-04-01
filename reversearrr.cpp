#include <bits/stdc++.h>
using namespace std;

int reverse (string &str, int &n)
{
    vector <char> v;
    vector <char> w;
    char c[n],q[n];
    for(int i=0;i<n;i++)
    {
        c[i]=str[i];
        v.push_back(c[i]);
    }

    for(int i=n-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }

   


}

int main()
{
    string str= "akshat";
    int n = str.size();
    reverse(str,n); 
}