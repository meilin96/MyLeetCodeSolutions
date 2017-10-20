class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;
        int p1 = 0;
        int p2 = p1;
        for(;p2 < nums.size();p2++){
            if(nums[p2] != val){
                nums[p1] = nums[p2];
                p1++;
            }
        }
        return p1;
    }
};
