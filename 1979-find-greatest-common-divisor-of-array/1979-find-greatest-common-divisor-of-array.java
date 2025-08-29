class Solution {
    public int findGCD(int[] nums) {
       int size=nums.length;
        int val =1;
        Arrays.sort(nums);
       
     for(int i=1;i<=nums[0];i++){
        if(nums[0]%i==0 && nums[size-1]%i==0){
            val=i;
        }
     }
     return val; }
   }
