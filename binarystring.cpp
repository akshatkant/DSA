//Not done

/*The binary number system only uses two digits, 0 and 1. Any string that represents a number in the binary number system can be called a binary string. You are required to implement the following function: 

int OperationsBinaryString(char *str);



The function accepts a string 'str' as its argument. The string 'str' consists of binary digits separated with an alphabet as follows: 

'A' denotes AND operation 
'B' denotes OR operation 
'C' denotes XOR operation 
You are required to calculate the result of the string 'str', scanning the string left to right, taking one operation at a time, and return the same. 

Note:

No order of priorities of operations is required. 
Length of 'str' is odd 
If 'str' is NULL or None(in case of python), return -1 


Example:



Input: 

str: ICOCICIAOBI 



Output: 

1 



Explanation: 

The alphabet in 'str' when expanded becomes "1 XOR 0 XOR 1 XOR 1 AND 0 OR 1", the result of the expression becomes 1, hence 1 is returned. 

*/

#include <bits/stdc++.h>
using namespace std;

int binarystring(string str,int &n)
{
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
             str[i-1] and str[i+1];
        }

        if(str[i]=='B')
        {
             str[i-1] or str[i+1];
        }

        if(str[i]=='C')
        {
             str[i-1] xor str[i+1];
        }


    }
}
int main()
{
    string str = "ICOCICIAOBI";
    int n = str.length();
    cout<<binarystring(str,n);
}