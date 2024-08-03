// class Solution {
// public:
//     bool canBeEqual(vector<int>& target, vector<int>& arr) {
//         if(target.size() != arr.size())
//             return false;

//         map <int , int> mpp1;
//          map <int , int> mpp2;
//         for(int i = 0 ; i < target.size() ; i++)
//         {
//             mpp1[target[i]]++;
//             mpp2[arr[i]]++;
//         }

//         for(int i = 0; i < mpp1.size() ; i++)
//         {
//             if(mpp1[i] != mpp2[i])
//                 return false;
//         }

//             return true;

//           Another better code
// if(target.size() != arr.size())
//             return false;

//         sort(target.begin() , target.end());
//         sort(arr.begin() , arr.end());
//         for(int i = 0 ; i < target.size() ; i++ )
//             if(target[i] != arr[i])
//                 return false;

//         return true;

//     }
// };