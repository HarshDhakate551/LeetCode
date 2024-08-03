// class Solution
// {
// public:
//     bool isPalindrome(string s)
//     {
// using sliding window
// for(int i = 0 ; i < s.length() ; i++)
// {
//     if(!isalnum(s[i]))
//     {
//         s[i] = 32;
//     }

//     if( 65<=s[i] && s[i]<=90 )
//     {
//         s[i] += 32;
//     }
// }
// s.erase(remove(s.begin(), s.end(), ' '), s.end());
// cout << s;
// int last = s.length() - 1;
// int mid = s.length() / 2;
// for(int first = 0 ; first < mid ; first++,last--)
// {
//     if(first == last)
//     {
//         break;
//     }
//     if(s[first] != s[last])
//     {
//         return false;
//     }
// }

// return true;
//     }
// };