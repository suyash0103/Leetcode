class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long long int len = 0;
        
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] >= '0' && S[i] <= '9')
            {
                len = len * (S[i] - '0');
            }
            else
            {
                len++;
            }
        }
        
        K = K % len;
        int i = S.length() - 1;
        while(i >= 0)
        {
            K = K % len;
            if(K == 0 && !(S[i] >= '0' && S[i] <= '9'))
            {
                string ans = "";
                ans.push_back(S[i]);
                return ans;
            }
            
            if(S[i] >= '0' && S[i] <= '9')
            {
                len = len / (S[i] - '0');
            }
            else
            {
                len--;
            }
            
            i--;
        }
        
        return "";
    }
};