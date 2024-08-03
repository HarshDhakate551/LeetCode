// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int midNum = nums[nums.size() / 2];
//         int mid = nums.size()/2;
//         if(target == midNum)
//         {
//             return mid;
//         }
//         else if(target > midNum)
//         {
//             for(int i = mid+1 ; i < nums.size() ; i++)
//             {
//                 if(nums[i] == target)
//                 {
//                     return i;
//                 }
//             }
//         }
//         else
//         {
//             for(int i = 0 ; i < mid ; i++)
//             {
//                 if(nums[i] == target)
//                 {
//                     return i;
//                 }
//             }
//         }
        
//         return -1;
//     }
// };