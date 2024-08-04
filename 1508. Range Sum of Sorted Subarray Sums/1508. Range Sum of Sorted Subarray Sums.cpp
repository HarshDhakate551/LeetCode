// class Solution {
// public:
//     int rangeSum(vector<int>& nums, int n, int left, int right) {

//         int sum = 0;
//         vector<int>sums;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             sum = 0;
//             for(int j = i ; j < nums.size() ; j++)
//             {
//                 sum += nums[j];
//                 sums.push_back(sum);
//             }
//         }

//         // not an good for loop gives TLE but passed 23 cases of 56
//         // for(int i = 0 ; i < nums.size() ; i++)
//         // {
//         //     for(int j = i+1 ; j <= nums.size() ; j++)
//         //     {
//         //         sum = 0 ;
//         //         for(int k = i ; k < j ; k++)
//         //         {
//         //             cout << nums[k] << " ";
//         //             sum += nums[k];
//         //         }
//         //             sums.push_back(sum);
//         //         cout << endl;
//         //     }
//         // }

//         for(int i = 0 ; i < sums.size() ; i++)
//             cout << sums[i] << " " ;

//         sort(sums.begin() , sums.end());

//         long long actSum = 0;
//         int mod = 1000000007;
//         // it's the lagest prime number to keep the value unique and in range
//         // The variable mod is often used in competitive programming and algorithmic challenges to keep the values of large numbers within a manageable range and to prevent integer overflow. Specifically, it helps in performing arithmetic operations under a large prime modulus.
//         for(int i = 0 ; i <= sums.size() ; i++)
//         {
//             if(i >= left-1 && i <= right-1)
//             {
//                 actSum = (actSum+ sums[i])%mod;
//             }
//         }
//         cout << actSum ;
//         return actSum;
//     }
// };