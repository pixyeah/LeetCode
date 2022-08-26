class Solution {
public:
    //略拉胯
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() < 2)
        {
            return false;
        }
        set<int> a;
        int length = nums.size();
        for(int i=0;i<length;i++)
        {
            if(a.find(nums[i]) != a.end())
            {
                return true;
            }
            else
            {
                a.insert(nums[i]);
            }
        }
        return false;
    }
  
    //一般
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() < 2)
        {
            return false;
        }
        sort(nums.begin(),nums.end());
        int length = nums.size()-1;
        for(int i=0;i<length;i++)
        {
            if(nums[i] == nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
    
};
