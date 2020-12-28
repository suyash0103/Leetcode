class Solution {
public:
    int reachNumber(int target) {
        int n = 1;
        
        target = abs(target);
        int sum = 0;
        while(sum < target)
        {
            sum += n;
            n++;
        }
        
        n--;
        if(sum == target)
            return n;
        
        int diff = sum - target;
        if(diff % 2 == 0)
        {
            return n;
        }
        else
        {
            diff += n + 1;
            if(diff % 2 == 0)
                return n + 1;
            else
                return n + 2;
        }
        return -1;
    }
};