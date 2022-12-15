#include <stack>
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
       
        //use stack
        // stack<char>s;
        // string ans="";
        // for(int i=text2.length()-1;i>=0;i--){
        //    s.push(text2[i]);
        // }
         vector<int>curr(text2.length()+1,0);
        vector<int>next(text2.length()+1,0);
        for(int i=text1.length()-1;i>=0;i--){
            for(int j=text2.length()-1;j>=0;j--){
                int ans=0;
                 if(text2[j]==text1[i]){
                     ans=1+next[j+1]; 
                     
                 }
                 else{
                     ans=max(next[j],curr[j+1]);
                 }
                   curr[j]=ans;
            }
            next=curr;
        }
        return next[0];
    }
};