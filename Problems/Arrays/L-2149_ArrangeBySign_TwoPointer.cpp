//OPTIMAL
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> temp(n);
        int left=0,right=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                temp[right] = nums[i];
                right = right+2;
            }
            else{
                temp[left] = nums[i];
                left = left +2;
            }
            
        }
        return temp;
        
    }
};




//BRUTE FORCE (MINE)
/*
vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int k=0,l=0;
        vector<int>tempposi,tempneg;
        for(int i =0;i<n;i++){
            if(nums[i]<0)
            tempneg.push_back(nums[i]);
            else {
                tempposi.push_back(nums[i]);
            }
        }
        for(int i =0;i<n;i++){
            if(i%2==0){
                nums[i] = tempposi[k];
                k++;
            }
            else{
                nums[i] = tempneg[l];
                l++;
            }
        }
        return nums;
        
    }
*/