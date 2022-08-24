

class Distinct {
public:
    // 笨
    int removeDuplicates(vector<int>& nums) {
        int preNum = nums[0];
        int duplicateCount = 0;
        int length = nums.size();
        for(int i=1;i<length-duplicateCount;i++)
        {
            if(preNum == nums[i])
            {
                duplicateCount++;
                for(int j =i;j<length-duplicateCount;j++)
                {
                    nums[j] = nums[j+1];
                }
                nums[length-duplicateCount] = nums[0];
                i--;
            }
            else
            {
                preNum = nums[i];
            }
        }

        return length - duplicateCount;
    }
    
    //
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        int index = 0;
        int length = nums.size(); //空间换时间  
        for(int i=1;i<length;i++)
        {
            if(nums[index] != nums[i])
            {
                index ++;
                nums[index] = nums[i];
            }
        }

        return index+1;
    }
    
    
};
