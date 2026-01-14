//OPTIMAL -> MOORE's VOTING ALGO
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,element;
        for(int i=0;i<nums.size();i++){
        if(count == 0){
            count =1;
            element = nums[i];
        }
        else if (nums[i]==element)
        count++;
        else count--;
        }
        return element;
    }
};



// BETTER(MINE)
/*
    int majorityElement(vector<int>& nums) {
        int max;
        unordered_map<int,int> hash;
    for(int i =0;i<nums.size();i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(hash[nums[i]]>(nums.size()/2))
        max = nums[i];
    }
    return max; 
    }
*/