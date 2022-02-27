#include<iostream>
#include<vector>
using namespace std;



int findmin(int A[],int n){



if(n==1)
	return A[0];

return min(A[n-1],findmin(A,n-1));  //for the max just change the min to max



}
















int main()
{
int arr[]={2,4,1,6,3};

int n=sizeof(arr)/sizeof(arr[0]);


cout<<findmin(arr,n);


return 0;


}
