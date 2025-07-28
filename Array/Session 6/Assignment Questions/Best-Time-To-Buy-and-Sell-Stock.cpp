//Brute Force Solution
//Time Complexity: O(n^2)
//Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;

        for(int i=0; i<n; i++){         //Buy
            for(int j=i+1; j<n; j++){       //Sell
                int currProfit = prices[j] - prices[i];
                if(currProfit > maxProfit){
                    maxProfit = currProfit;
                }
            }
        }

        return maxProfit;
    }
};

