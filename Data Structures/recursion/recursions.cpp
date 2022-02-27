




#include<iostream>
#include<algorithm>
using namespace std;



// void saydigit(int n,string arr[]){

//     if(n==0){
//         return;
//     }



//     int digit=n%10;
//     n=n/10;

//     saydigit(n,arr);

//     cout<<arr[digit]<<endl;






// }



// int sum(int n){
//  if(n==1)
//  	return 1;
 

//  return n+sum(n-1);

// }





//reverse string recursively
// void reverse(string& s,int l,int h){
//     if(l>h)
//         return;
//     swap(s[l],s[h]);
//     l++;
//     h--;


//     reverse(s,l,h);

// }

// int power(int a,int b){
//     if(b==0)
//         return 1;
//     if(b==1)
//         return a;

//     int ans=power(a,b/2);
//     if(b%2==0){
//         return ans*ans;
//     }

//     else{

//         return a* ans*ans;

//     }
// }
// void sortArray(int *arr,int n){

//    if(n==0 || n==1){
//       return;
//    }


//   for(int i=0;i<n-1;i++){
//     if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//     }
//   }


// sortArray(arr,n-1);

// }
// int main(){

// int arr[5]={2,5,1,6,9};

// sortArray(arr,5);

// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int power (int a, int n) {
//     if(n == 0)
//         return 1;
//     // else
//     if(n % 2 == 0) {
//         int temp = power(a, n / 2);
//         return temp * temp;
//     }
//     // else
//     return a * power(a, n - 1);
// }

// int solve(int x, const vector<int> &powers, int index) {
//     if(index == 0) {
//         return (x == 1) ? 1 : 0;
//     }
//     // else
//     if(x == powers[index])
//         return 1 + solve(x, powers, index - 1);
//     // else
//     int res = 0;
//     res += solve(x - powers[index], powers, index - 1);
//     res += solve(x, powers, index - 1);
//     return res;
// }


// int main() {
//     int x, n;
//     cin >> x >> n;
    
//     int pow = 1;
//     vector<int> powers;
//     for(int a = 2; pow <= x; a++) {
//         powers.push_back(pow);
//         pow = power(a, n);
//     }
    
//     cout << solve(x, powers, powers.size() - 1) << endl;        
//     return 0;
// }


// void onetoNdecreasing(int n){
//     if(n==0)
//     {
        
//         return;


//     }


//     cout<<n;
//     onetoNdecreasing(n-1);

// }

// int main(){

// int n;
// cin>>n;
// onetoNdecreasing(n);
//  return 0;








// int friendsPairing(int n){
      

//   if(n==0||n==1)

//   {

//        return 1;



//   }



//   int opt1=friendsPairing(n-1);
//   int opt2=(n-1)*friendsPairing(n-2);



//   return opt2+opt1;









// }



// void printSubset(int arr[],int i,int n string osf){


// if(i==n)
// {
//     cout<<"["<<osf "]"<<endl;
//     return;

// }





// printSubset(arr,i+1,n,osf + to_string(arr[i]) + ",");//Convert to string as array is integer
//     //Element not included
// printSubset(arr,i+1,n,osf);







// }













