class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        int count=0;
        vector<int>out;
        for (int i=0;i<n;i++){
            for(char c:words[i]){
                if(c==x){
                    out.push_back(i);break;

                }
            }
        }
       
      
   return out; }
};