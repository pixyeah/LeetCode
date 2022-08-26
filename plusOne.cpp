class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        short int len = digits.size()-1;
        digits[len] ++;
        bool isPlus = false;
        for(int i=len;i>=0;i--)
        {
            if (isPlus)
            {
                digits[i] ++;
                if(digits[i] == 10)
                {
                    digits[i] = 0;
                    continue;
                }
                else
                {
                    isPlus = false;
                }
            }
            if(digits[i] == 10 )
            {
                digits[i] = 0;
                isPlus = true;
            }
        }
        if(isPlus)
        {
            digits[0] = 0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
  
    
    vector<int> plusOne(vector<int>& digits) {
        
        short int len = digits.size()-1;
        bool isPlus = false;
        for(int i=len;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i] ++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
  
  
};
