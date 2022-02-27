// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<algorithm>
// using namespace std;


// vector<int>find3numbers(vector<int>arr,int N){
// int x = INT_MAX;
//        int y = INT_MIN;
       
//        int left = 0; int right = N-1;
//        while(left < right)
//        {
//            x = min(x,arr[left]);
//            y = max(y, arr[right]);
//            if(y > x)
//            {
//                for (int i =left+1; i <= right-1  ;i++)
//                {
//                    if (arr[i] < y && arr[i] > x)
//                        return {x,arr[i],y};
//                }
//            }
//            left++;
//            right--;
//        }
//        return {};    
       
   
// }

// int main(){


// int N;
// cin>>N;
// vector<int>arr;
// for(int i=0;i<N;i++){
// 	cin>>arr[i];
// }


// vector<int>s;
// s=find3numbers(arr,N);
// int n=sizeof(s)/sizeof(s[0]);

// for(int i=0;i<n;i++){
// 	cout<<s[i];
// }



// }

// C++ Program for above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the triplet
void find3Numbers(vector<int>& nums) 
{
  
  // If number of elements < 3
  // then no triplets are possible
  if (nums.size() < 3){
    cout << "No such triplet found";
    return;
  }
  
  // track best sequence length 
  // (not current sequence length)
  int seq = 1;        
  
  // min number in array
  int min_num = nums[0];  
  
  // least max number in best sequence 
  // i.e. track arr[j] (e.g. in 
  // array {1, 5, 3} our best sequence 
  // would be {1, 3} with arr[j] = 3)
  int max_seq = INT_MAX;      
  
  // save arr[i]
  int store_min = min_num;   
  
  // Iterate from 1 to nums.size()
  for (int i = 1; i < nums.size(); i++) 
  {
    if (nums[i] == min_num)
      continue;
    
    else if (nums[i] < min_num) 
    {
      min_num = nums[i];
      continue;
    } 
    
    // this condition is only hit 
    // when current sequence size is 2
    else if (nums[i] < max_seq) {    
      
      // update best sequence max number 
      // to a smaller value 
      // (i.e. we've found a 
      // smaller value for arr[j])
      max_seq = nums[i];       
      
      // store best sequence start value 
      // i.e. arr[i]
      store_min = min_num;            
    } 
    
    // Increase best sequence length & 
    // save next number in our triplet
    else if (nums[i] > max_seq) 
    {
      // We've found our arr[k]!
      // Print the output        
        cout << "Triplet: " << store_min << 
                 ", " << max_seq << ", " << 
                           nums[i] << endl;
        return;
    }
  }
  
  // No triplet found
  cout << "No such triplet found";
}

// Driver Code
int main() {
  vector<int> nums {1,2,-1,7,5};
  
  // Function Call
  find3Numbers(nums);
}
