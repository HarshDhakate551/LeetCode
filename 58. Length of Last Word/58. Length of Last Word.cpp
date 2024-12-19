// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int len = 0;
//         int seclen = 0;
//         for(int i = 0 ; i < s.size() ; i++)
//         {
//             if(s[i] == ' ')
//             {
//                 if(len > 0)
//                     seclen = len;
//                 len = 0;
//             }
//             else
//             {
//                 len++;
//             }
//         }
//         if(len == 0 )
//         {
//             return seclen;
//         }
//         return len;
//     }
// };