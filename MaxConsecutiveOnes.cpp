//485. Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxconsecutive=0;
        int current=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                current++;
            }
            else{
               if(current>maxconsecutive){
                   maxconsecutive=current;
               }
               current=0;
            }
        }
                       if(current>maxconsecutive){
                   maxconsecutive=current;
               }
        return maxconsecutive;
        
    }
};




