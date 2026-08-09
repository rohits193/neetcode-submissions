class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarysearch(0,nums.size()-1,nums,target);
    }

    int binarysearch(int l,int r,vector<int>& nums,int target){
        if(l>r) return -1;
        int mid=l+(r-l)/2;

        if(nums[mid]==target){
            return mid;
        }else{
            return (nums[mid]>target ?binarysearch(l,mid-1,nums,target):binarysearch(mid+1,r,nums,target));
        }
    }
};
