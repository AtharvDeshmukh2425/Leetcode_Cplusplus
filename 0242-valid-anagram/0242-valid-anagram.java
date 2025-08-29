class Solution {
    public boolean isAnagram(String s, String t) {
        char [] arr=s.toCharArray();
        char [] arr1=t.toCharArray();
       int size =arr.length;
       int size1=arr1.length;
        
     if (size!=size1){
        return false;
     }
    Arrays.sort(arr);
    Arrays.sort(arr1);
        for (int i=0;i<size;i++){
            if(arr[i]!=arr1[i]){
            return false;
        }
   }
   return true;}
}