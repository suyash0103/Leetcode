class Solution {
public:
    bool detectCapitalUse(string word) {
        int l = word.length();

        int nums = 0;
        int caps = 0;
        for(int i = 0; i < l; i++)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
                nums++;
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                caps++;
                if(i == 0)
                    continue;
                if(nums >= 1)
                    return false;
            }
        }

        if(caps == 1 || caps == 0 || caps == l)
            return true;

        return false;
    }
};
