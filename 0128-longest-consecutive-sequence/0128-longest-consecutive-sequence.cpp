class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int curr,res=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                curr=1;
                while(s.find(nums[i]+curr)!=s.end()){
                    curr++;
                }
                res=max(res,curr);
            }
        }
        return res;
    }
};