// code passes half test cases and fault when min element is giving output 3  but if taken other element then
//  consecutive number is 7
// [9,1,4,7,3,-1,0,5,8,-1,6]
// Minimum element is : -1 The hash.first is -1
// Minimum element is : 0 The hash.first is 0
// Minimum element is : 1 The hash.first is 1

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.empty())
//             return 0;

//         map<int , int> hash;
//         int minElement = nums[0];
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             hash[nums[i]]++;

//             if(minElement > nums[i])
//             {
//                 minElement = nums[i];
//             }

//         }
//         cout << minElement;
//         int counter = 0;
//         for(auto hash:hash)
//         {
//         //    cout <<"Value of "<< hash.first+1 <<" is " << hash.second+1 << " "<<endl;
//             if(hash.first == minElement)
//             {
//                 counter++;
//                 cout <<"Minimum element is : "<< minElement<<" The hash.first is "<< hash.first << endl;
//                 minElement++;
//             }
//         }
//         return counter;

// Not the best code but my code
// if(nums.empty())
//             return 0;

//         vector<int>duplicate;
//         sort(nums.begin() , nums.end());
//         for(int i = 1 ; i < nums.size() ; i++)
//         {
//             if(nums[i-1] != nums[i])
//                 duplicate.push_back(nums[i-1]);
//         }
//         duplicate.push_back(nums[nums.size()-1]);
//         for(int i = 0 ; i < duplicate.size() ; i++)
//             cout << duplicate[i] << " ";

//         int counter = 1;
//         int MaxCount = 1;
//         for(int i = 1 ; i < duplicate.size() ; i++)
//         {
//             if(duplicate[i] == duplicate[i-1]+1)
//             {
//                 counter++;
//                 if(MaxCount < counter)
//                     MaxCount = counter;
//             }
//             else
//             {
//                 counter = 1;
//             }
//         }
//         return MaxCount;
//     }
// };