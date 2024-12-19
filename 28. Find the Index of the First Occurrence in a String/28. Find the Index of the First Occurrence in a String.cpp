// class Solution {
// public:
//     int strStr(string haystack, string needle) {

// --------- ACCEPTED(SomeWhat sliding window) ---------------------
//         int i;
//         bool flag = false;
//         if( haystack.size() < needle.size() )
//             return -1;
//         for (i = 0 ; i <= (haystack.size() - needle.size()) ; i++)
//         {
//             int left = i;
//             int right = 0;
//             while(right < needle.size())
//             {
//                 if(haystack[left] == needle[right])
//                 {
//                     left++;
//                     right++;
//                     flag = true;
//                 }
//                 else
//                 {
//                     flag = false;
//                     break;
//                 }
//             }

//             if(flag)
//                 break;
//         }

//         if(flag)
//             return i;
//         return -1;

// --------------------------------
// i think wrong approch
// int j = 0;
// int i ;
// for( i = 0 ; i < haystack.size() ; i++)
// {
//     if( haystack[i] == needle[j] )
//     {
//         if(j == (needle.size() - 1))
//             break;
//         j++;
//     }
//     else
//     {
//         j = 0;
//     }
// }

// if(j > 0)
//     return i-j;
// return -1;

// int substrSize = needle.size();
// int i;
// bool flag;
// for (i = 0 ; i <= (haystack.size() - substrSize) ; i++)
// {
//     for(int i = 0 ; i < substrSize ; i++)
//     {
//         flag = 0;
//         if(haystack[i] =needle[i])
//         {
//             flag = 1;
//         }
//     }
//     if(flag)
//         break;
// }
// if(flag)
//     return i;
// return -1;

//     }
// };