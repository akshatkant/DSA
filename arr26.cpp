#include <bits/stdc++.h>
using namespace std;


bool sumzero(int a[],int &n)
{
     unordered_map<int, int>mpp;
       int prefix_sum=0;
       for(int i=0;i<n;i++)
       {
           prefix_sum+=a[i];
           if(mpp.find(prefix_sum)!=mpp.end()||prefix_sum==0){
               return true;}
           else{
               mpp[prefix_sum]++;}
       }
       return false;
}

int main()
{
    int a[] = {4 ,2, -4, 1, 6};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<sumzero(a,n);
}