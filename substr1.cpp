//use of substr() function.

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "na";
  string p = "hanahahana";
  int S = s.size();
  int P = p.size();
  for(int i=0;i<P;i++)
  {
    if(p.substr(i,S)==s)
    {
        cout<<i<<endl;
    }
  }
}
