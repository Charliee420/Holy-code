class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n= nums.size();
        int res=0;
        for (int i=1; i<=nums.size();i++){
            if(n%i==0){
                int val = nums[i-1];
                res += val*val ;
            }
        } 
        return res;
        
    }
};