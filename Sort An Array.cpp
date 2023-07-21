class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        bool swapped; //this variable to check whether it's swapped or not

      //nested for loops to check if index of nums ith position is greater than ith + 1 postion.
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j < nums.size() - i - 1;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]);  //if this condition satisfies swapped nums index to nums + 1 index
                    swapped = true;  //swapping done successfull her
                }
            }
        }
      
        
        return nums; //return ans
    }
};
