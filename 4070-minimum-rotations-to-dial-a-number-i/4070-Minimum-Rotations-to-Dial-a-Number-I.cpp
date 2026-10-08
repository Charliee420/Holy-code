class Solution {
public:
    int minRotations(string s) {
        int rotation = 0;
        int curr = 0; // Starts at '0'
        
        for (char ch : s) {
            int target = ch - '0';
            int diff = abs(target - curr);
            
            // Minimum distance on a circular dial of size 10
            rotation += min(diff, 10 - diff);
            
            // Move pointer to current target
            curr = target;
        }
        
        return rotation;
    }
};