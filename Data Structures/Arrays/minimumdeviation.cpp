#include<iostream>
#include<vector>
using namespace std;



  int minimumDeviation(vector<int>& nums) {
      int mini=INT_MAX;
        priority_queue<int>pq;
        for(auto n:nums){
            
            
            if(n%2==1){
                n*=2;
     
            }
            
            
            mini=min(mini,n);
            pq.push(n);
            
            
            
            
        }
        
        
        
        int res=INT_MAX;
        while(true){
            int n =pq.top();
            pq.pop();
            res=min(res,n-mini);
            if(n%2==1){
                break;
            }
            mini=min(mini,n/2);
            pq.push(n/2);
            
            
        }
   

        return res;
   
    //     ans=var1-var2;
        
    //     return ans;
        
        
        
    // }


}











int main()
{

	vector<int>nums ={ 1,2,3,4};
    cout<<minimumDeviation(nums);



	return 0;
}