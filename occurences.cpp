#include <bits/stdc++.h>
using namespace std;

int perm(string str,int &n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='r')
        {
            count++;
        }
    }

    return count;
}


int main()
{
    string str = "abrarrrabra";
    int n = str.size();
    cout<<perm(str,n);
}