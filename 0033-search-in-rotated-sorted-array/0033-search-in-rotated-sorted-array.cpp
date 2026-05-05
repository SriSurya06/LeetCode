class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<h){
            int mid=(l+h)/2;
            if(nums[mid]>nums[h]){
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
            int temp=l;
            if(target<=nums[n-1] && target>=nums[temp]){
                l=temp;
                h=n-1;
            }
            else {
                l=0;
                h=temp-1;
            }
            while(l<=h){
                int mid=(l+h)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]<target) l=mid+1;
                else  h=mid-1 ;
            }
        return -1;
    }
};