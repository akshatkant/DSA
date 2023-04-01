#include <bits/stdc++.h>
#include <vector>
using namespace std;


/*
void duplicate(vector<int> a,int &n)
{

    vector <int> temp;
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                //count++;
                temp[i]=a[i];
                auto it = unique(temp.begin(),temp.end());
               
            } 
              
        }
    } 

            for (int i : temp) 
            { 
                cout << i << " ";  
            }
            cout << "\n";  

    /*int m= sizeof(temp)/sizeof(temp[0]);
            for(int k=0;k<m;k++)
            {
                for(int p=k+1;p<m;p++)
                {
                    if(temp[k]!=temp[p])
                     cout<<temp[k];
                }
            }   */

   

   // cout<<count<<endl;;
   /*int k = sizeof(temp)/sizeof(temp[0]);
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }

}

int main()
{
    vector <int> a{1,2,2,1,2,3,4,5};
    int n = a.size();
    cout<<n;
    //int n = sizeof(a)/sizeof(a[0]);
    duplicate(a,n);
}
*/


int main()   
{  
    // remove duplicate elements  
    vector<int> v{1,2,3,1,2,3,3,4,5,4,5,6,7};  
    sort(v.begin(), v.end());   
    auto last = unique(v.begin(), v.end());  
    // v now holds {1 2 3 4 5 6 7 x x x x x x}, where 'x' is indeterminate  
    v.erase(last, v.end());   
    for (int i : v)  
      cout << i << " ";  
    cout << "\n";  
      
    return 0;  
}  