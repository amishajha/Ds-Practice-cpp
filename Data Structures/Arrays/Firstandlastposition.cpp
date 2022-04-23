#include<iostream>
using namespace std;

vector<int>FindFirstandLast(vector<int>nums,int target){






    int n=nums.size();
		
        int l=0 , r=n-1;
		
        int ans1=-1 , ans2=-1;
		
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]==target)
            {
                ans1=mid;
                r=mid-1;    // one time traverse towards left most for finding leftmost ones
            }
            else
            {
                if(nums[mid]>target)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        
        l=0 , r=n-1;
        
         while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]==target)
            {
                ans2=mid;
                l=mid+1; // one time traverse towards right most of finding right most ones
            }
            else
            {
                if(nums[mid]>target)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        
        return {ans1 , ans2};
        
    }

  



}







int main(int argc, char const *argv[])
{
	vector<int>nums ={5,7,7,8,8,10};
	int target = 8;
	// FindFirstandLast(nums,target);
	vector<int>ans;
	ans = FindFirstandLast(nums,target);
	for(int i = 0;i <ans.size();i++){
		cout<<ans[i];

	}
	return 0;
}