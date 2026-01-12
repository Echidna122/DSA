//OPTIMAL -> DUTCH NATIONAL FLAG ALGO
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int low =0,mid =0,high = nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else{
            mid++;
        }

    }
    }
};


// BETTER (MINE)
/*
    void sortColors(vector<int>& nums) {
        int cred=0,cwhite=0,cblue=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
        cred++;
        else if(nums[i]==1)
        cwhite++;
        else cblue++;
    }
    for(int i=0;i<nums.size();i++){
        if(i<cred)
        nums[i]=0;
        else if(i>=cred&&i<(cwhite+cred))
        nums[i] = 1;
        else nums[i]=2;
    }
    }
*/