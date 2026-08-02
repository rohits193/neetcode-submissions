class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int j =n-1;
        
        for (int i = 0; i < j;) {
            for (; j > i;) {
                if (numbers[i] + numbers[j] > target) {
                    j--;
                } else if(numbers[i] + numbers[j] == target) {
                    return {i+1,j+1};
                }else i++;
            }
        }

        
    }
};
