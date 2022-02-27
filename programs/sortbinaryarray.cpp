#include<iostream>

using namespace std;

int sort(int A[], int n)
{
    // count number of 0's
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0) {
            zeros++;
        }
    }

    // put 0's at the beginning
    int k = 0;
    while (zeros--) {
        A[k++] = 0;
    }

    // fill all remaining elements by 1
    while (k < n) {
        A[k++] = 1;
    }
}







int main(void){
int arr[]={1,0,0,0,1,1,1,1};
int n=sizeof(arr);
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) {
            zeros++;
        }
    }

    // put 0's at the beginning
    int k = 0;
    while (zeros--) {
        arr[k++] = 0;
    }

    // fill all remaining elements by 1
    while (k < n) {
        arr[k++] = 1;
    }

for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;

}
