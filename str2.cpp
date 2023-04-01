#include <bits/stdc++.h>
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
    char str[max],str2[max];
    cout<<"Enter a String"<<endl;
    cin>>str;
    strcpy(str2,str);
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

    if(strcmp(str,str2)==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}