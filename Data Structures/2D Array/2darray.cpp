#include<iostream>
#include<bits/stdc++.h>
using namespace std;









void printsum(int arr[][4] ,int row,int col){

          

for(int i=0;i<3;i++){
    
    int sum=0;
    for(int j=0;j<4;j++){
    	sum+=arr[i][j];

    }

    

    cout<<sum<<" ";



}



     





}



int largestrowsum(int arr[][4],int row,int col){


      int maxi=INT_MIN;
      for(int i=0;i<3;i++){
      	int sum=0;

      	for(int j=0;j<4;j++){
      		sum+=arr[i][j];

      	}


      	if(sum>maxi){
      		maxi=sum;



      	}
      }

return maxi;

}


int main(int argc, char const *argv[])
{

     
     int arr[3][4];
     //taking input


     // cout<<"enter the elements"<<endl;

     for(int i=0;i<3;i++){

     	for(int j=0;j<4;j++){
     		cin>>arr[i][j];

     	}





     }


//column wise input


     //   for(int i=0;i<4;i++){

     // 	for(int j=0;j<3;j++){
     // 		cin>>arr[j][i];

     // 	}





     // }


//print 

     // cout<<"printing the output"<<endl;

  
     // for(int i=0;i<3;i++){

     // 	for(int j=0;j<4;j++){
     // 		cout<<arr[i][j]<<" ";

     // 	}

     //   cout<<endl;



     // }

  // printsum(arr,3,4);

  
  cout<<largestrowsum(arr,3,4);
 






	
 	return 0;
}