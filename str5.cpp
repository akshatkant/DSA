#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "akshat";
    string b = "thaksa";

    //string c = a+b;
    string c = a.append(b);
    cout<<c<<endl;
    int P = c.size();
    int S = b.size(); 

    //or

    //string c = a+b;
    //cout<<c<<endl;

    if(c.find(b)!=string::npos)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}