/*Q1. Repeated Substring Pattern
Easy
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
Example 1:
Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.
Example 2:
Input: s = "aba"
Output: false
Example 3:
Input: s = "abcabcabcabc"
Output: true
Explanation: It is the substring "abc" four times or the substring "abcabc" twice.
Constraints:
1 <= s.length <= 104
s consists of lowercase English letters.*/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for(int len = 1;len<= n/2;len++){
            if(n%len != 0){
                continue;
            }
            string pattern = s.substr(0,len);
            string repeated = "";
            int times = n/len;
            for(int i = 0;i<times;i++){
                repeated += pattern;
            }
            if(repeated == s){
                return true;
            }
        }
        return false;
    }
};
