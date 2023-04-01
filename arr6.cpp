#include <bits/stdc++.h>
#include <vector>
using namespace std;



int unionfn (int a1[],int a2[],int &n1,int &n2)
{
    int i=0,j=0,k=0;
    sort(a1,a1+n1);
    sort(a2,a2+n2);
    int n=n1+n2;
    
    int res[20];
    for(i = 0 ; i<n1; i++)
    {
        res[i]=a1[i];
    }

     for(j = 0 ; j<n2; j++)
    {
        res[i]=a2[j];
        i++;
    }

      for(k = 0 ; k<n; k++)
    {
        cout<<res[k]<<" ";
    }

    


}


int intersectfn(int a1 [], int a2[], int &n1 ,int &n2)
{
    int i=0,j=0,k=0;
    vector <int> v;
    int res[20];
    sort(a1,a1+n1);
    sort(a2,a2+n2);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]==a2[j])
            {
                //res[i] = a1[i];
                v.push_back(a1[i]);
            }
        }
    }

   /* int total = sizeof(res)/sizeof(int);

    cout<<endl<<total;
    for(int i=0;i<total;i++)
    {
       // cout<<endl<<res[i]<<" ";
       
    }
*/


     for(int i=0;i<v.size();i++)
    {
       
       cout<<endl<<v[i]<<" ";
    }
}

int main()
{
    int a1[] = {23,12,24,54,65,45};
    int a2[] = {45,34,78,12,43,23};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    unionfn(a1,a2,n1,n2);
    intersectfn(a1,a2,n1,n2);
}