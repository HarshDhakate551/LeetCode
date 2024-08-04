// class Solution {
// public:
//     bool check(vector<int>& nums) {

//         int n=nums.size();
//         int count=0;
//         //Sorted
//         for(int i=1;i<n;i++){
//             if(nums[i-1]>nums[i]){
//                 count++;
//             }
//         }
//         //Rotated

//         if(nums[n-1]>nums[0]){
//             count++;
//         }

//         return count<=1;

// was able to pass 64 test case   50%
// exceptions occured at [2,1] (-- Output  flase) (### Expected  true)
// vector<int>sorted(nums);
// sort(sorted.begin() , sorted.end());
// for(int i = 0 ; i < nums.size() ; i++)
// {
//     if(nums[i]!= sorted[i])
//     {
//         int x = nums[0];
//         vector<int>ans(nums);
//         for(int i = 0 ; i < nums.size() ; i++)
//             nums[i] = ans[(i+x)%nums.size()];

//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             if(nums[i] != sorted[i])
//                 return false;
//         }
//     return true;
//     }
// }
// return true;
//     }
// };