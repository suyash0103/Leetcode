class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        
        stack<int> st;
        
        int ans = 0;
        
        int i = 0;
        
        while(i < n)
        {
            if(st.size() == 0 || h[st.top()] <= h[i])
            {
                st.push(i);
                i++;
            }
            else
            {
                int ind = st.top();
                st.pop();
                
                int area = h[ind] * (st.size() == 0 ? i : i - st.top() - 1);
                
                ans = max(ans, area);
            }
        }
        
        while(st.size() > 0)
        {
            int ind = st.top();
            st.pop();

            int area = h[ind] * (st.size() == 0 ? i : i - st.top() - 1);

            ans = max(ans, area);
        }
        
        return ans;
    }
};