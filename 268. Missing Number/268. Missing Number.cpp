// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         vector<int>ans(nums.size()+1 , -1);
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             ans[nums[i]] = nums[i];
//         }
//         for(int i = 0; i < ans.size() ; i++)
//             if(ans[i] == -1)
//                 return i;

//         return 0;
//     }
// };