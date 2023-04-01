#include <bits/stdc++.h>
using namespace std;


int secondMost(string arr[],int &n)
{
 
    map <string,int> mp;
    vector <pair<int,string>> vp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto i:mp)
    {
      vp.push_back({i.second,i.first});

    }

   //sort(vp.begin(),vp.end());
    
    cout<<vp[vp.size()-2].second;
    
    

}

int main()
{
    string arr[] = {"geek", "for", "geek", "for", "geek", "aaa"};
    int n = sizeof(arr)/sizeof(arr[0]);
    secondMost(arr,n);
    return 0;
}