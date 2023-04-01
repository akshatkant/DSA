//https://www.geeksforgeeks.org/sort-c-stl/

#include <bits/stdc++.h>
#include <vector>
using namespace std;



int kthmin(int arr[],int &n, int &k)
{

    sort(arr,arr+n);
    return arr[k-1];

}


int kthmax(int arr[],int &n, int &k)
{

    sort(arr,arr+n,greater<int>());
    return arr[k-1];

}


int main()
{
    int n,k;
    int arr[] = {23,65,45,34,67};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter k"<<endl;
    cin>>k;
    
    cout<<kthmin(arr,n,k)<<endl;
    cout<<kthmax(arr,n,k);
    
}