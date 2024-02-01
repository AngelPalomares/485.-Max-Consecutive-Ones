class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int total_sums = 0;
        int MaxNumer = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                total_sums = 0;
            }else{
                total_sums++;
                if(total_sums > MaxNumer){
                    MaxNumer = total_sums;
                }
            }
        }

        return MaxNumer;
    }
};
