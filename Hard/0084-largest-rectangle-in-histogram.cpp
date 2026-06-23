/*Q3. Largest Rectangle in Histogram
Hard
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1,
return the area of the largest rectangle in the histogram.
Example 1:
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:
Input: heights = [2,4]
Output: 4
Constraints:
1 <= heights.length <= 105
0 <= heights[i] <= 104*/
class Solution {
public:
    int max(int a,int b){
        return (a>b?a:b);
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int area = heights[0];
        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int e = st.top();
                st.pop();
                int nsc = i;
                int psc = (st.empty())?-1:(st.top());
                area = max(area,heights[e]*(nsc-psc-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int nsc = n;
            int e = st.top();
            st.pop();
            int psc = (st.empty())?-1:(st.top());
            area = max(area,heights[e]*(nsc-psc-1));
        }
        return area;
    }
};
