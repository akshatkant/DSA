#include <bits/stdc++.h>
using namespace std;


int letter (char str[] , int &n)
{
    unordered_map <char,int> mp;
    
    int total;

    mp['A'] = 1;
    mp['B'] = 10;
    mp['C'] = 100;
    mp['D'] = 1000;
    mp['E'] = 10000;
    mp['F'] = 100000;
    mp['G'] = 1000000;

    
    for(int i=0;i<n;i++)
    {
        total = total+mp[str[i]];
    }

    return total;

}

int main()
{
   char str[] = "BDAF";
   int n = sizeof(str)/sizeof(str[0]);
   cout<<letter(str,n);
}