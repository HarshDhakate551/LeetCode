// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         int bills5 = 0;
//         int bills10 = 0;
//         for(int i = 0 ; i < bills.size() ; i++)
//         {
//             if(bills[i] == 5)
//             {
//                 bills5 += 1;
//             }

//             if(bills[i] == 10)
//             {
//                 if(bills5 >= 1)
//                 {
//                     bills5 -= 1;
//                     bills10 += 1;
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }

//             if(bills[i] == 20)
//             {
//                 if(bills5 >= 1 && bills10 >= 1)
//                 {
//                     bills5 -= 1;
//                     bills10 -= 1;
//                 }
//                 else if(bills5 >= 3)
//                 {
//                     bills5 -= 3;
//                 }
//                 else
//                 {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };