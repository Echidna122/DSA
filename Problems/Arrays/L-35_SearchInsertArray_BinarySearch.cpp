//OPTIMAL (MINE)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0,high = n-1;
        int ind=0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<target){
                low = mid+1;
                ind = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
                ind = mid;
            }
            else{
                ind = mid;
                return ind;
            }

        }
        return ind;
    }
};