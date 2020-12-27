#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    
    int find(string s, vector<int>& v, int i)
    {
        if(i == s.length())
        {
            return 1;
        }
        
        if(s[i] == '0')
        {
            return 0;
        }
        
        if(v[i] != -1)
        {
            return v[i];
        }
        
        if(i == s.length() - 1)
        {
            v[i] = find(s, v, i + 1);
            
            return v[i];
        }
        
        int a = 0;
        
        int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if(num <= 26)
        {
            a = find(s, v, i + 2);
        }
        
        int b = find(s, v, i + 1);
        
        v[i] = a + b;
        
        return a + b;
    }
    
    int numDecodings(string s) {
        vector<int> v(s.length() + 1, -1);
        
        int x = find(s, v, 0);
        
        cout << x << endl;
        
        return x;
    }
};