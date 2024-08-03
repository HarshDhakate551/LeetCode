// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         // [2,4,1] failed because expected prfit was 2 my gave profit of 0
//         // int minPriceDay = 0;
//         // for(int i = 0 ; i < prices.size() ;i++)
//         //     if(prices[minPriceDay] > prices[i])
//         //         minPriceDay = i;
//         // // cout << minPriceDay;
//         // int profit = 0;
//         // for(int i = minPriceDay+1 ; i < prices.size() ; i++)
//         //     if(prices[i]-prices[minPriceDay] > profit)
//         //         profit = prices[i]-prices[minPriceDay];

//         // // cout << profit;

//         // return profit;

//         // ----------------------------------
//         int minPriceDay = 0;
//         int profit = 0;

//         for(int i = minPriceDay+1 ; i < prices.size() ; i++)
//         {
//             if(prices[minPriceDay] > prices[i])
//                 minPriceDay = i;

//             if(prices[i]-prices[minPriceDay] > profit)
//                 profit = prices[i]-prices[minPriceDay];
//         }

//         return profit;
//     }
// };