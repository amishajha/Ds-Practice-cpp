int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);

        int count = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]==count){
                count++;
            }
        }
       



    } 