class Solution {
public:

int firstOcc(vector<int>& nums, int target,int s,int e){
    s=0,e=nums.size()-1;
    int first=-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            first=mid;
            e=mid-1;
        }
        else if(nums[mid]<=target){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
    }
    return first;
}

int lastOcc(vector<int>& nums, int target,int s,int e){
     s=0,e=nums.size()-1;
    int second=-1;

    while(s<=e){
        int mid=s+(e-s)/2;
     if(nums[mid]==target){
            second=mid;
            s=mid+1;
        }
        else if(nums[mid]>=target){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return second;
}



    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOcc(nums,target,0,nums.size()-1);
        int second=lastOcc(nums,target,0,nums.size()-1);

        return {first,second};
    }
};