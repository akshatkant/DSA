//calculating number of digits in a number
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6789;
    int k = floor(log10(n))+1;
    cout<<k;
}
*/

//calculating most significant digit


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6789;
    int k = (log10(n))+1;
    cout<<k<<endl;
    int x = pow(10,k);
    int ans = n/x;
    cout<<ans<<endl;
}





