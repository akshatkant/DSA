//not done
#include <bits/stdc++.h>
using namespace std;


char findAutoCount(char *n)
{
    int zero=0,one=0,two=0;
   int nl = sizeof(n);
    for(int i=0;i<nl;i++)
    {
        if(n[i]=='0')
        {
            zero++;
        }

        if(n[i]=='1')
        {
            one++;
        }

        if(n[i]=='2')
        {
            two++;
        }
    }

    if(n[0]==zero)
    {
        if(n[1]==one)
        {
            if(n[2]==two)
            {
                unordered_set <char> uset;
                for(int i=0;i<nl;i++)
                {
                    uset.insert(n[i]);
                }

                for(auto it = uset.begin() ; it!= uset.end() ; it++)
                {
                    cout<<*it;
                }

                

            }
        }
    }


}

int main()
{
    char str[11] = "1210";
    cout<<findAutoCount(str);

    
}