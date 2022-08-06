#include<iostream>
#include<vector>

using namespace std;

int fib (int n ,vector<int>&dp){
    //base case
    if(n<=1)
    return n;
 

    if(dp[n]!=-1)

    return dp[n];



    //step 2
    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];


}







int main(){

      int n ;
      cin>>n;


    //   vector<int>dp(n+1);
    //   for(int i = 0;i<=n;i++)
    //     dp[i]=-1;





    // cout<<fib(n,dp)<<endl;
    // return 0;


//tabulation code

    // vector<int>dp(n+1);
    // dp[1] = 1;
    // dp[0] = 0;
    // //step 3

    // for(int i = 2;i<=n;i++)
    // dp[i] = dp[i-1]+dp[i-2];

    // cout<<dp[n]<<endl;




//space optimization

      int prev1 = 0;
      int prev2 = 0;

      if(n==0)
      return prev2;

      for(int i = 2;i<=n;i++){
        int curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;
      }


      cout<<prev1<<endl;
      return 0;









}