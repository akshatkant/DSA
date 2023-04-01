#include <bits/stdc++.h>
using namespace std;


string stringfunc(string &str , int &n)
{
    stack <string> st;
    string result;
    vector <string> vp;
    string word="";

    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            st.push(" ");
            word = "";

        }

        else
        {
            word = word + str[i]; 
        }

         st.push(word);
        
        
    }

   

    while(!st.empty())
    {
        result = result+st.top();
        st.pop();
    }

    return result;

}

int main()
{
    string str = "Ravi is a good man";
    int n = str.length();
    cout<<stringfunc(str,n)<<endl;
    
}