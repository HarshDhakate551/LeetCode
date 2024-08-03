// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         vector<int>add(nums);
//         for(int i = nums.size() ; i < nums.size()*2 ; i++)
//             add.push_back(nums[(i) % nums.size()]);
//         return add;
//     }
// };