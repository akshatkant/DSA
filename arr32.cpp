#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {1, 2, 6};
    int count=0;
    int mount=0;
    int j=0;
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]); 
    for(int i=0;i<n1;i++)
    {
        if(a1[i]==a2[j])
        {
            count++;
            j++;
        }
    }

    if(count>=n2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}