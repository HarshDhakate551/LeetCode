class Solution {
public:
    int minAddToMakeValid(string s) {
        // worng apporch use stack
        // unordered_map<char,int> mpp;
        // for(int i = 0 ; i < s.length() ; i++){
        //     mpp[s[i]]++;
        // }
        // int a= 0;
        // int b = 0;
        // for(auto it:mpp){
        //     if(it.first == '(')
        //     {
        //         a = it.second;
        //     }
        //     else if(it.first == ')')
        //     {
        //         b = it.second;
        //     }
        // }
        // return abs(a-b);
        stack<char>st;
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if (s[i] == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();  // Pop if there's a matching opening parenthesis
            } 
            else {
                st.push(')');  // Otherwise, push the closing parenthesis
            }
        }
        }
        return st.size();

        // int ans = 0;
        // for(int i = 1 ; i < s.length() ; i++)
        // {
        //     if( !(s[i-1] == '(' && s[i]== ')') )
        //     {
        //         ans++;
        //     }
        // }
        // return ans;
    }
};