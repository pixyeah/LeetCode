class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() < 2)
        {
            return;
        }
        auto iter = remove(nums.begin(),nums.end(),0);
        
        while(iter < nums.end())
        {
            *iter = 0;
            iter ++;
        }
        // int i =0;
        // for(auto iter=nums.begin();iter!=nums.end(); )
        // {
        //     if( *iter == 0)
        //     {
        //         iter = nums.erase(iter);//当删除时erase函数自动指向下一个位置，就不需要进行++
        //         i++;
        //     }
        //     else
        //             iter ++ ;    //当没有进行删除的时候，迭代器++
        // }

    }
};
