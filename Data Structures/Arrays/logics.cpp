#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



//get Pair 
// int getpair(int arr[],int n,int k){

//         unordered_map<int,int> m;
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(m.find(k-arr[i])!=m.end()) count+=m[k-arr[i]];
            
//            m[arr[i]]++;
            
          
//         }
//         return count;

// }




//k rotation logic

// int findkrotation(int arr[],int n){
// 	int cnt=0;
	

// for(int i=0;i<n;++i){



// int diff=arr[i]-arr[n-1];
// if(diff>0)
// 	cnt++;
// else
//      break;





// }

// return cnt;


// }




// equilibrium   point qs


// int equilibrium(int arr[],int n){
    

//     int sum1=0;
//     for(int i=0;i<n;i++){
//     	sum1+=arr[i];
//     }

// int temp=0;
//     for(int i=0;i<n;i++){
//     	sum1-=arr[i];
    
   
//     if(sum1==temp){
//     	return i;
//     }
//       temp+=arr[i];

// }

// return -1;
	

	
// }


//three sum closest
// int threesumclosest(vector<int> &arr,int x){

// sort(arr.begin(), arr.end());

  
//     int closestSum = 1000000000;


//     for (int i = 0; i < arr.size() - 2; i++) {

//         int ptr1 = i + 1, ptr2 = arr.size() - 1;

//         while (ptr1 < ptr2) {

            
//             int sum = arr[i] + arr[ptr1] + arr[ptr2];
   
//               if (sum == x) return sum;
  
//             if (abs(x - sum) < abs(x - closestSum)) {
//                 closestSum = sum;
//             }

//             if (sum > x) {
//                 ptr2--;
//             }

          
//             else {
//                 ptr1++;
//             }
//         }


// }
// return closestSum;





// }

// N = 6, X = 16
// Arr[] = {1, 4, 45, 6, 10, 8}
// Output: Yes
// Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
// bool hasArrayTwoCandidates(int arr[],int n,int x){


//     unordered_map<int,int>mp;




// for(int i=0;i<n;i++){
//     if(mp.find(x-arr[i])!=mp.end()){
//         return true;
       
//     }
    
//      mp[arr[i]]++;
// }

//         return false;
        
        
//         // code here
//     }




// N = 5
// Arr[] = {3, 5, 0, 0, 4}
// Output: 3 5 4 0 0


// void pushzerores(int arr[],int n){
// int i=1;
// int j=0;
    
//     while(i<n){
//          if(arr[i]!=0 and arr[j]==0){
             
//                 swap(arr[i],arr[j]);
//          }
          
           
              

              
              
          
//        if (arr[j]!=0){
//            j++;
           
//        }     
//       i++;

      
     
//     }
       
       


// }






// vector<int>ktop(vector<int> nums,int k){
//     unordered_map<int,int>mp;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//     mp[nums[i]]++;
//         }
// vector<pair<int,int>>s;
// for(auto i:mp){
//     pair<int,int>p;
   
//    p.first=i.second;
//    p.second=i.first;


//    s.push_back(p);


// }    


// sort(s.begin(),s.end());

// vector<int>d;

// for(int i=0;i<k;i++){
//     d.push_back(s[s.size()-1-i].second);

// }
// return d;
// }










//   i j
// //9 4 -2 -1 5 0 -5 -3  2
//   9 -2 4 -1 5 0 -5 -3 2
// void rearrange(int arr[]  ,int n){

// vector<int>parr;
// vector<int>narr;

// for(int i=0;i<m;i++){
//   if(arr[i]<0){
//      narr.push_back(arr[i]);
//   }
//   else{
//     parr.push_back(arr[i]);
//   }

// }

// int p=0,n=0,i=0;

// while(i<m){

//     if(p!=parr.size()){
//         arr[i++]=parr[p++]; 
//     }

//     if(n!=narr.size()){
//         arr[i++]=narr[n++];
//     }
   
// }
// }



//element with left side smaller than right side

// int findElement(int arr[],int n){

// int min[n],max[n];
// int big=0;
// int small=arr[n-1];
// int ans=0;

// for(int i=0;i<n;i++){
//     if(arr[i]>big){
//         big=arr[i];

//         max[i]=big;
//     }
// }


// for(int i=n-1;i>=0;i--){
// if(arr[i]<small){
//     small=arr[i];
//     min[i]=small;
// }
// }




// for(int i=0;i<N;i++){
//     if(i!=0 and i !=n-1){
//         if(min[i]==max[i]){
//             ans=min[i];
//         }
//     }
// }



// return ans;





// }

//reverse Node


// ListNode* reverseKgroup(ListNode* head,int k){



// if(head==NULL)return head;
// int cnt=0;
// ListNode* curr=head ,*prev=nullptr;
// while(cnt<k){



//     ListNode* nxt=curr->next;
//     curr->next=prev;

//     prev=curr;
//     curr=nxt;
//     cnt++;

//     if(cnt==k){
//         break;
//     }

// }

// if(cnt<k){
//     //undo the changes
//     //rereverse
//     curr=prev;
//     prev=NULL;
//     while(curr){

//     ListNode* nxt=curr->next;
//     curr->next=prev;

//     prev=curr;
//     curr=nxt;

//     }


//     return prev;

// }

// ListNode* ans=reverseKgroup(curr,k);
// head->next=ans;
// return prev;
 





// }












//sum equals to sum

//Input:N=7arr[] = {3, 4, 7, 1, 2, 9, 8} Output: 1Explanation:(3, 7) and (9, 1) are the pairs whosesum are equal.



// int findpairs(long long a[],int n){

// unordered_set<int>s;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         int sum=a[i]+a[j];
//         if(m.find(sum!=m.end())){
//             return 1;
//         }
//         m.insert(sum);
//     }
// }


// }





//arrange odd numbers to odd indexes and even to even

// N = 6
// arr[] = {3, 6, 12, 1, 5, 8}

// int i=0;
// int j=1;

// while(i<n and j<n){

// if(arr[i]%2==0){
//     i=i+2;
// }



// if(arr[j]%2!=0){

//     j=j+2;
// }


// else if(arr[i]%2!=0){
//     swap(arr[i],arr[j]);

// }


// }










int main(){





   




























}