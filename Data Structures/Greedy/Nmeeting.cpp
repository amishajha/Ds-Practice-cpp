#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//time complexity ---O(n) +O(n log n) + O(n) ~O(n log n)
//space ==o(n)

struct meeting
{

	int start;
	int end;
	int pos;

	
};

class Solution{



   public:
   	void maxMeetings(int s[],int e[],int n){


       struct meeting meet[n];
       for(int i=0;i<n;i++){

       	meet[i].start=s[i],meet[i].end=e[i],meet[i].pos=i+1;

       }
       sort(meet,meet+n,comparator);
       vector<int>ans;
       int limit=meet[0].end;

       ans.push_back(meet[0].pos);
       for(int i=1;i<n;i++){
       	 if(meet[i].start>limit){
       	 	limit=meet[i].end;
       	 	ans.push_back(meet[i].pos);

       	 }
       }

     cout<<"the order in which the meetings will be performed is "<<endl;
     for(int i=0;i<answer.size();i++){
     	cout<<answer[i]<<endl;

     }










   	}
























}





int main()
{

Solution obj;
int n=6;
int start[]={1,3,0,5,8,5};
int end[]={2,4,5,7,9,9};

obj.maxmeetings(start,end,n);


	
	return 0;
}