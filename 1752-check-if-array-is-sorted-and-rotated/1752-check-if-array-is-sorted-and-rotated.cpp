class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size()-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n]>nums[0]){
            count++;
        }
        return count<=1;
    }
};