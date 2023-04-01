//take accenture_question.cpp reference
//educative.io

#include <bits/stdc++.h>
using namespace std;


int romantoint(char str[],int &n)
{
    int total;
    map <char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;

    for(int i=0;i<n;i++)
    {

      if(str[i]<str[i+1])
      {
        total = total-m[str[i]]; 
      }
      else
      {
        total=total+m[str[i]];
      }
    }

    return total;
    
}




int main()
{
  char str[] = "XVI";
  int n = strlen(str);
  cout<<romantoint(str,n);
}