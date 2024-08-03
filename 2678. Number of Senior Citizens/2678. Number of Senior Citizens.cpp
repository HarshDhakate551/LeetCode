// class Solution {
// public:
//     int countSeniors(vector<string>& details) {
//         int counter = 0;
//         for(int i = 0; i < details.size() ; i++)
//         {
//             string s =  details[i];
// stoi() stl function converts an string to integer where it's imp to provide and substring and not just sigle charecter
//             int age = stoi(s.substr(11,2));
//             cout << age;

//             if(age > 60)
//                 counter++;
//         }
//         return counter;
//     }
// };