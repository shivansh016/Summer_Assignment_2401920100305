//find the bestbuying day... for each day the best buy day would be the least prices day from the previous one's
//so we create a bestbuy vector ... store INt_max at the 0th idx. as we can't buy the stock before the -0th day.
// then calculated the best for for indices 1 to n-1 _> bestbuy [i]  = min(bestbuy[i-1] , prices[i-1])

//then we calculated the currProfit and maxProfit.. traversing the bestbuy vector... and return the maxProfit.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> bestbuy(n);

        bestbuy[0] = INT_MAX;


        for(int i=1; i<prices.size(); i++){
            bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
        }

        int maxProfit = 0;

        for(int i=0; i<bestbuy.size(); i++){
            int currProfit =  prices[i] - bestbuy[i];
            maxProfit = max(maxProfit, currProfit);
        }

        return maxProfit ;
    }
};