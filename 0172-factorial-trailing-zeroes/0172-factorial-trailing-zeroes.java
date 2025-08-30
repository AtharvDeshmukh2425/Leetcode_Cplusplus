class Solution {
    public int trailingZeroes(int n) {
        long out=1;
        for(int i=n;i>0;i--){
            out*=i;
        }
        int num=0;
        long val=out;
        int idx=0;
        while(val%10==0){
        val=val/10;
        idx++;
        }
    return idx;}
}