class Solution {
    public int trailingZeroes(int n) {
      /*  long out=1;
        for(int i=n;i>0;i--){
            out*=i;
        }
        int num=0;
        long val=out;
        int idx=0;
        while(val%10==0){
        val=val/10;
        idx++;
        */ 
        // Count how many times 5 divides numbers from 1 to n (extra counts for 25, 125, etc.)

        int idx=0;
        for(int i=1;i<=n;i++){
           int val = i;
        while (val % 5 == 0) {
        idx++;
        val /= 5;
}

        }
           return idx;
        }
 }
