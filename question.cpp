#include <bits/stdc++.h>
using namespace std;

int func(int arr[] , int &n)
{
    stack <int> st;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            st.push(arr[i]);
        }
        else
        {
            continue;
        }
    }

    cout<<st.top()<<endl;

}

int main()
{
    int arr[] = {4,5,8,6,20,15,3,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    func(arr,n);
}