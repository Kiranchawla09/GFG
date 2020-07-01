/*You are required to complete this function*/
bool is_k_palin(string s,int k)
{
    int n= s.size();
     int dp[n][n];
     for (int i=0;i<n;i++)
     dp[i][i]=1;
     int q=0;
     for (int j=2;j<=n;j++)
     {
         for (int i=0;i<n-j+1;i++)
         {
             q= i+j-1;
             if (s[i]==s[q] && j==2)
             dp[i][q]=2;
             
             else if (s[i]==s[q])
             dp[i][q]=dp[i+1][q-1]+2;
             
             else
             dp[i][q]=max(dp[i+1][q],dp[i][q-1]);
         }
     }
     
      if(k+dp[0][n-1]<n)
      return false;
      return true;
//Your code here
}