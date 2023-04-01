//stack approach

/*#include <bits/stdc++.h>
using namespace std;
#define max 10
int item;
int s[max];
int top;

void push(char item)
{
    if(top==max-1)
    {
        return;
    }
    else
    {
        top=top+1;
        s[top]=item;
    }
}


int pop()
{

    int itemdeleted;

    if(top==-1)
    {
        return 0;
    }
    else
    {
        itemdeleted = s[top--];
        return itemdeleted;
        
    }

}



int main()
{
    int len;
    char str[max];
    cout<<"Enter a String"<<endl;
    cin>>str;
    len = strlen(str);
    for(int i=0;i<len;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<len;i++)
    {
        str[i] = pop();
    }

    for(int i=0;i<len;i++)
    {
        cout<<str[i];
    }
}*/


 
#include <bits/stdc++.h>
using namespace std;
 

string reverseString(string str,int &n)
{
 
    reverse(str.begin(), str.end());
    str.insert(str.end(), ' ');
    int j = 0;
    
 
    for (int i = 0; i < n; i++)
    {   
        if (str[i] == ' ') 
        {

            reverse(str.begin() + j,str.begin() + i);          
            j = i + 1;
        }
    }
 
   
    str.pop_back();
    return str;
}
 

int main()
{
    string str = "I like this code";
    int n = str.length();
    cout<<reverseString(str,n);
    return 0;
}