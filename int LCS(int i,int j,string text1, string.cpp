int LCS(int i,int j,string text1, string text2, vector<vector<int>> &dp){
        if(i==0 || j==0) return 0;
        
        if(dp[i][j]!= -1) return dp[i][j];
        if(text1[i-1]==text2[j-1]){
            return dp[i][j]= 1+ LCS(i-1,j-1,text1,text2,dp);
        }
        else{
            return dp[i][j]=max(LCS(i-1,j,text1,text2,dp),LCS(i,j-1,text1,text2,dp));
        }
         
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i=text1.size();
        int j=text2.size();
        vector<vector<int>> dp(i+1, vector<int>(j+1, -1));
        for(int a=0;a<=i;a++) dp[i][0]=0;
        for(int a=0;a<=j;a++) dp[0][j]=0;
        return LCS(i,j,text1,text2,dp);