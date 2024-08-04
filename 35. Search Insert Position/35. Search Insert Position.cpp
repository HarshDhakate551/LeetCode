// Noob coded lol

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int midIndex = nums.size()/2;
//         int midValue = nums[midIndex];

//         if(midValue == target)
//             return midIndex;
//         else if(midValue > target)
//         {
//             for(int i = 1; i <= midIndex ; i++)
//             {
//                 if(target == nums[i-1])
//                     return i-1;
//                 if(target > nums[i-1] && target < nums[i])
//                 {
//                     return i;
//                 }
//             }
//         }
//         else
//         {
//             for(int i = midIndex+1; i < nums.size() ; i++)
//             {
//                 if(target == nums[i])
//                     return i;
//                 if(target == nums[i-1])
//                     return i-1;
//                 if(target > nums[i-1] && target < nums[i])
//                 {
//                     return i;
//                 }
//             }
//         }
//         if(target < nums[0])
//             return 0;

//         return nums.size();
//     }
// };