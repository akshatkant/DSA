//string subsequence using recursion
#include <bits/stdc++.h>
using namespace std;


void stringSubsequence(string input,string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }

    stringSubsequence(input.substr(1),output);
    stringSubsequence(input.substr(1),output+input[0]);
}


int main()
{
    string output = " ";
    string input = "abcd";
    stringSubsequence(input,output);
    return 0;
}