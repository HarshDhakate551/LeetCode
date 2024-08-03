// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0)
//             return false;
//
//         int refrence = x;
//         long long ans = 0;
//         while(refrence != 0 )
//         {
//             ans = ans*10 + refrence%10;
//             refrence /= 10;
//         }
//         if (x == ans)
//             return true;

//         return false ;
//     }
// };