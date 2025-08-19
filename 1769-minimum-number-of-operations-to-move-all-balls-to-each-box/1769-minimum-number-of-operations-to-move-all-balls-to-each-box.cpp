class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int val=0;
        vector<int>out;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                    if(i<j){
                        val=val+(j-i);
                    }
                    else {
                         val=val+(i-j);
                    }
                }
                else {
                   val=val;
                }
                
            }
            out.push_back(val);
                val=0;
        }
    return out;}
};