//0s and 1s output = 0000011111

#include <bits/stdc++.h>
using namespace std;

int zeroOnes(int num[],int &n)
{
    vector <int> vp,vc,vx;
    for(int i=0;i<n;i++)
    {
        if(num[i]==0)
        {
            vp.push_back(num[i]);
        }
        else
        {
            vc.push_back(num[i]);
        }
    }

    for(int i=0;i<vp.size();i++)
    {
        vx.push_back(vp[i]);
    }

    for(int i=0;i<vc.size();i++)
    {
        vx.push_back(vc[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<vx[i];
    }



}

int main()
{
    int num[] = {0,1,0,1,0,1,0,0,1,1,1,0,0};
    int n = sizeof(num)/sizeof(num[0]);
    zeroOnes(num,n);
}