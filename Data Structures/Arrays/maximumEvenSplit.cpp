#include<iostream>
using namespace std;



vector<long long> maximumEvenSplit(long long n) {
        
        vector<long long>ans;
        if(n%2!=0){
        	return {};
        }

        long ong i =2;
        long long sum=0;
        while((sum+i)<=n){

        	ans.push_back(i);
        	sum+=i;
        	i+=2;
        	
        }
       int sz = ans.size();
        ans[sz-1] += (n-crSum);
        return ans;
    }







int main()
{
  long long n = 12;
  vector<long long>ans;
  ans= maximumEvenSplit(n);
   for(int i=0;i<ams.size();i++){
     
     cout<<ans[i];


   }
	return 0;
}