// class Solution {
// public:
//     int getsameelement(vector<int>& nums, int compare)
//     {
//         int counter = 0;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             if(nums[i] == compare)
//             {
//                 counter++;
//             }
//         }
//         return counter;
//     }

//     int removeDuplicates(vector<int>& nums) {
//         for(int i = 0 ; i < nums.size() ; )
//         {
//             int countsameelement = getsameelement(nums,nums[i]);
//             if(countsameelement > 1)
//             {
//                 for(int j = i + 1 ; j < (countsameelement+i) ; j++)
//                 {
//                     nums[j] = 101;
//                 }
//             }
//             i = i + countsameelement;
//         }

//         sort(nums.begin() , nums.end());
//         int counter = 0;

//         for(int i = 0 ; i < nums.size() ; i++)
//             if(nums[i] != 101)
//                 counter++;

//         return counter;
//     }
// };