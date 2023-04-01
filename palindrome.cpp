#include <bits/stdc++.h>
using namespace std;
#define max 10
int item;
int s[max];
int top=-1;


void push(int item)
{
    if(top==max-1)
    {
        return;
    }

    top=top+1;
    s[top]=item;

}

int pop()
{
    if(top==-1)
    {
        return 0;
    }
    int itemdeleted=s[top--];
    return itemdeleted;

}




int main()
{
    char str[max],str2[max];
    cin>>str;
    strcpy(str2,str);

    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }

    for(int i=0;i<strlen(str);i++)
    {
        str[i]=pop();
    }

    if(strcmp(str2,str)==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}