#include <bits/stdc++.h>
using namespace std;



int duplicate(char str[],int n)
{
    int count=0;
    char temp[10];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j] && str[i] !='\0')
            {
              count++;  
              temp[i]=str[i];
              
            }
        }
    }

    cout<<count<<endl;
    for(int i=0;i<strlen(temp);i++)
    {
        cout<<temp[i];
    }
}

int main()
{

    int n;
    cin>>n;
    char str[10];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    } 

    duplicate(str,n);
    


}