
class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        if(n<3){
            return n;
        }
        map<char,int> cFreq;
        for(char ch : s){
            cFreq[ch]++;
        }
        for(auto it :cFreq){
            int cc=it.second;
                while(cc>=3){
                    n-=2;
                    cc-=2;
                }
            }
        
      return n;
    }
};