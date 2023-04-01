#include <bits/stdc++.h>
using namespace std;


void remove_duplicates(char arr[] , int &n)
{
/*    unordered_set<char> uset;
    for(int i=0;i<n;i++)
    {
        uset.insert(str[i]);
    }
    
    for(auto it=uset.begin();it!=uset.end();it++)
    {    
        cout<<*it<<" ";    
    }*/
  
  vector <char> v;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==arr[i-1])
      {
          continue;
      }
      else
      {
          v.push_back(arr[i]);
      }
  }
  
  for(int i=0;i<n;i++)
  {
      cout<<v[i];
  }
  
  
    
}

int main() {
	
	//char str = {'R','R','R','G','G','B','B','B','R','R','G','B','B','R','R'};
	string str = "RRRGGBBBRRGBBRR";
	int n = str.size();
	char arr[n+1];
	for(int i=0;i<n;i++)
	{
	    arr[i]=str[i];
	   
	}
	remove_duplicates(arr,n);
}
