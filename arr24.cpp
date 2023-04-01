#include <bits/stdc++.h>
using namespace std;


/*void findCommon(int a[], int b[], int c[], int &n1, int &n2,int &n3)
{
    
    sort(a,a+n1);
    sort(b,b+n2);
    sort(c,c+n3);

    unordered_set<int> uset1,uset2,uset3;
    for(int i=0;i<n1;i++)
    {
        uset1.insert(a[i]);
    }

    for(int i=0;i<n1;i++)
    {
        uset2.insert(b[i]);
    }

    for(int i=0;i<n3;i++)
    {
        if(uset1.find(c[i])!= uset1.end() && uset2.find(c[i])!=uset1.end())
        {
            if(uset3.find(c[i]) == uset3.end())
            {
                cout<< c[i] << " ";
            }
            uset3.insert(c[i]);
        }
    }


}
*/

void findCommon(int a[],int b[],int c[],int &n1,int &n2,int &n3)
{
    vector<int> v;

    unordered_map <int,int> m1,m2,m3;
    for(int i=0;i<n1;i++)
    {
        m1[a[i]]++;
    }

     for(int i=0;i<n2;i++)
    {
        m2[b[i]]++;
    }

     for(int i=0;i<n3;i++)
    {
        m3[c[i]]++;
    }

    for(int i=0;i<n1;i++)
    {
        if(m1[a[i]] and m2[a[i]] and m3[a[i]])
        {
            v.push_back(a[i]);
            //m1[a[i]]=0;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}

int main()
{
    int a[] = {7,3,5,1,4};
    int b[] = {7,4,6,1,9};
    int c[] = {7,8,3,1,4};

    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int n3 = sizeof(c)/sizeof(c[0]);

    findCommon(a,b,c,n1,n2,n3);

    

  

}