
Brute Force Solution 
Time Complexity: O(n^2)
Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        
        for(int i=0; i<n; i++){
            int count = 0;
            int j;
            for(j=0; j<n; j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }
            if(count > n/2){
                return nums[i];
            }
        }
        return -1;
    }
};
