// class Solution {
// public:
//     int minSteps(string s, string t) {
//         vector<int>hashs(26 , 0);
//         vector<int>hasht(26 , 0);

//         for(int i = 0 ; i < s.length() ; i++)
//             hashs[s[i]-97]++;

//         for(int i = 0 ; i < t.length() ; i++)
//             hasht[t[i]-97]++;

//         for(int i = 0 ; i < hashs.size() ; i++)
//             cout << hashs[i] << " ";
//             cout << endl;
//         for(int i = 0 ; i < hasht.size() ; i++)
//             cout << hasht[i] << " ";
//             cout << endl;

//         int count = 0;
//         for(int i = 0 ; i < hasht.size() ; i++)
//             if(hashs[i] > hasht[i])
//             {
//                 count = count + (hashs[i]-hasht[i]);
//             }

//         // int a = 'a';
//         // cout << a;

//         return count;
//     }
// };