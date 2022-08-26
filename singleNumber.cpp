class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        int length = nums.size();
        if(length==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        
        int n = nums[0];
        for(int i=1; ;i+=2)
        {
            if(i>=length)
            {
                return nums[length-1];
            }
            if(nums[i] == n)
            {
                n = nums[i+1];
            }
            else
            {
                return n;
            }
        }
        return nums[0];
    }
  
    /*
    使用异或运算，将所有值进行异或
    异或运算，相异为真，相同为假，所以 a^a = 0 ;0^a = a
    因为异或运算 满足交换律 a^b^a = a^a^b = b 所以数组经过异或运算，单独的值就剩下了
    */  
    int singleNumber(vector<int>& nums) {
        int length = nums.size();
        int n = nums[0];
        for(int i=1;i<length ;i++)
        {
            n = n ^ nums[i];
        }
        return n;
    }
};
