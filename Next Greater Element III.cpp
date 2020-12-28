class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        
        int pos = -1;
        
        for(int i = s.length() - 1; i > 0; i--)
        {
            if(s[i] > s[i - 1])
            {
                pos = i;
                break;
            }
        }
        
        if(pos == -1)
        {
            return -1;
        }
        
        char c = s[pos - 1];
        char maxC = s[pos];
        int pos2 = pos;
        
        for(int j = pos; j < s.length(); j++)
        {
            if(s[j] > c && s[j] < maxC)
            {
                maxC = s[j];
                pos2 = j;
            }
        }
        
        char temp = s[pos - 1];
        s[pos - 1] = s[pos2];
        s[pos2] = temp;
        
        sort(s.begin() + pos, s.end());
        
        cout << s << endl;
        
        int x = 0;
        
        int k = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(INT_MAX / 10 < x) {
                return -1;
            }
            
            if(INT_MAX - x * 10 < (s[i] - '0')) {
                return -1;
            }
            
            x = x * 10 + (s[i] - '0');
        }
        
        cout << x << endl;
        
        return x;
    }
};