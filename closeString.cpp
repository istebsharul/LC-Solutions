class Solution{
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return 0;
        
        vector<int> wa(26,0);
        vector<int> wb(26,0);
        
        // word1 = "abc", word2 = "bca"
        for(int i=0;i<word1.size();i++){
            wa[word1[i]-'a']++;   
            wb[word2[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(wa[i]!=0 && wb[i]!=0 && wa[i]!=wb[i]){
                for(int j=i+1;j<26;j++){
                    if(wa[j]==wb[i]){
                        int m=wa[i];
                        wa[i]=wa[j];
                        wa[j]=m;
                    }
                }
            }
        }
        
        for(int i=0;i<26;i++){
            if(wa[i]!=wb[i]){
                return 0;
            }
        }
        
        return 1;
        
    }
};