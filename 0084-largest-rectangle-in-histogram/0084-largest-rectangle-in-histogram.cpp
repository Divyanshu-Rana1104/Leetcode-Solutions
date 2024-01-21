class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int leftSmall[n],rightSmall[n];
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            leftSmall[i]=(st.empty())?0:st.top()+1;
            st.push(i);
        }
          while (!st.empty()) {
            st.pop();}
         for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            rightSmall[i]=(st.empty())?n-1:st.top()-1;
            st.push(i);
        }
        int Maxa=0;
       for (int i = 0; i < n; i++) {
            Maxa = max(Maxa, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
        }
        return Maxa;
    }
};