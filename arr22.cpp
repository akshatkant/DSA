class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int p;
    int min=prices[n-1];
    int max=0;
   
    for(int i=n-1;i>=0;i--)
    {
        if(prices[i]<=min)
        {
            min=prices[i];
            p=i;
        }
    }
    for(int i=prices.size();i>=p-i;i--)
    {
        if(prices[i]>max)
        {

            max=prices[i];
        }
    }

    int ans = max-min;
        
    if(ans>0)
    {
        return ans;
    }
    else
    {
        return 0;
    }
    
}

    
};