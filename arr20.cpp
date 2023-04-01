#include <bits/stdc++.h>
using namespace std;


int next_permutation(int a[] , int &n)
{
    sort(a,a+n);
   next_permutation(a,a+n);
   cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;    
}

int main()
{
    int a[] = {1,1,5};
    int n = sizeof(a)/sizeof(a[0]);
    next_permutation(a,n);
}





/* using vector
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
        
        next_permutation(nums.begin(),nums.end());
       
        
       
         
         
    }
};
*/