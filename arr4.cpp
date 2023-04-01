#include <bits/stdc++.h>
using namespace std;


void sort012(int arr[],int n)
{
    int low=0;
    int mid =0;
    int high=n-1;

    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:swap(arr[low++],arr[mid++]);
            break;

            case 1:mid++;
            break;

            case 2:swap(arr[mid],arr[high--]);
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    sort012(arr,n);
   
  
    return 0;

}