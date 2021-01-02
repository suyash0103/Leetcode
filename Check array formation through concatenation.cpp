class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i = 0;
        
        while(i < arr.size())
        {
            int match = 0;
            for(int j = 0; j < pieces.size(); j++)
            {
                int k = 0;
                while(i < arr.size() && k < pieces[j].size() && arr[i] == pieces[j][k])
                {
                    match = 1;
                    i++;
                    k++;
                }
                if(match == 1)
                {
                    break;
                }
            }
            if(match == 0)
            {
                return false;
            }
        }
        
        return true;
    }
};