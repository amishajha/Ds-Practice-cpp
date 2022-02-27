#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Job{
     int id;	 // Job Id
    int dead; // Deadline of job
    int profit;

};
class Solution
{
    public:


    static bool comp(Job a ,Job b){
    return a.profit>b.profit;

    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {


         sort(arr,arr+n,comp);
         bool done[n]={0};





         int day=0,profit=0;
         for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
                if(done[j]==false){
                    day+=1;
                    profit+=arr[i].profit;
                    done[j]=true;
                    break;

                }
            }
         }


         return {day,profit};





    }
};


int main(){






int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[i].id=x;
        arr[i].dead=y;
        arr[i].profit=z;

    }

    Solution ob;
    vector<int>ans=ob.JobScheduling(arr,n);
    cout<<ans[0]<< "   "<<ans[1];
}
return 0;









}
