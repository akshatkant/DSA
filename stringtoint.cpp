#include <bits/stdc++.h>
using namespace std;

//string to integer array
int main()
{
    int a[10];
    string str = "12234";
    for(int i=0;i<str.length();i++)
    {
        a[i] = str[i]-'0';
    }

    for(int i=0;i<str.length();i++)
    {
        cout<<a[i]<<endl;
    }
       
}

//integer to string

int main()
{
   int a = 1234;
   string s = to_string(a);
   cout<<s;
}

//string to integer and not integer array

int main()
{
    string s = "123232";
    int n = stoi(s);
    cout<<n;
}


//string to character array

int main()
{
    string str = "1212313";
    int n = str.length();
    char c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=str[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }


}
