// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int>ans(nums);
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             nums[(i + k) % nums.size()] = ans[i];;
//         }
//         for(int i = 0 ; i < nums.size() ; i++)
//             cout << nums[i] << " ";
//     }
// };