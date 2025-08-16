class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int temp;
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;         
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
       
        for(int a=0;a<n;a++){
            if(a<count0){
                nums[a]=0;
            }
            else if(a<count0+count1){
                nums[a]=1;
            }
            else{
                nums[a]=2;
            }
        }
        
 }
};