#include <bits/stdc++.h>
using namespace  std;


int merge(int a[],int b[],int &n1,int &n2)
{
    vector <int> v(10);
    vector <int>::iterator it,st;
    sort(a,a+n1);
    sort(b,b+n2);
    
    it = set_intersection(a, a + n1, b, b + n2, v.begin()); 
    cout<<"Common Elements are:"<<endl;
    for (st = v.begin(); st!=it;st++)   
    {
        cout<<*st;   
    }
}



int main()
{
    int a[] = {6,3,2,4,5,1};
    int b[] = { 8,5,3,6,7,2};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    merge(a,b,n1,n2);
}