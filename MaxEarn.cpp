class Solution {
public:
    
    int maxProfit(vector<int>& prices) {

        if(prices.empty() || prices.size() <=1)
        {
            return 0;
        }
        int earn = 0;
        int length = prices.size();
        //7,1,5,3,6,4  
        for(int i=0;i<length-1;i++)
        {
            //如果隔天有利润，直接买
            if(prices[i+1] > prices[i])
            {
                earn += prices[i+1] - prices[i];
            }
            else
            {
                i = i+1;
                for(int j = i+1;j<length;j++)
                {
                    //如果后面有利润，直接买
                    if(prices[j] > prices[i])
                    {
                        earn += prices[j] - prices[i];
                        i = j-1;
                        break;
                    }
                    //后面有成本低的，就从成本低的开始
                    else
                    {
                        i = j;
                    }
                }
            }
        }
        return earn;
    }
  
    
    int maxProfit(vector<int>& prices) {

        if(prices.empty() || prices.size() <=1)
        {
            return 0;
        }
        int earn = 0;
        int length = prices.size()-1;
        //7,1,5,3,6,4  
        for(int i=0;i<length;i++)
        {
            //如果隔天有利润，直接买
            if(prices[i+1] > prices[i])
            {
                earn += prices[i+1] - prices[i];
            }
        }
        return earn;
    }
};
