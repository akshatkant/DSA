#include <bits/stdc++.h>
using namespace std;


void perm(string a[],int &n)
{
    int count=0;

    sort(a, a + n);
    reverse(a, a + n);

    do
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
        count++;
    } while (prev_permutation(a,a+n));

    cout<<"After loop"<<endl;
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;

    cout<<"Total Permutation"<<endl;
    cout<<count;
}

int main()
{
    string a[]={"a","b","c","d"};
    int n = sizeof(a)/sizeof(a[0]);
    perm(a,n);
    
}