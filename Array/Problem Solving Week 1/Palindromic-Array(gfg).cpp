
//Time Comp-lexity: O(n * log m)
//Space Complexity: O(1)

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        
        for(int i=0; i<arr.size(); i++){
            int num = arr[i];
            int original = num;
            int reversed = 0;
            
            //To check wheather the no is palindrome or not
            while(num > 0){
                reversed = reversed * 10 + (num % 10);
                num = num / 10;
            }
            
            if(original != reversed){
                return false;   //Not a palindrome
            }
        }
        return true;    // all are palindromes
    }
};