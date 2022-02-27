#include <iostream>
#include<algorithm>
using namespace std;




int minimumplatform(int start[] ,int dept[],int n){
sort(start,start+n);
sort(dept,dept+n);
int i=1,j=0;
int cnt=1;
int res=0;

while(i<n && j<n){
    if(start[i]<=dept[j]){

        i++;
        cnt++;

    }

    else if(start[i]>dept[j]){
        cnt--;
        j++;


    }


    if(cnt>res){
        res=cnt;
    }


}

return res;


}




int main(){
int start[]={900, 940,950, 1100, 1500, 1800};
int dept[]={  910, 1200, 1120, 1130, 1900, 2000  };
int n=sizeof(start)/sizeof(start[0]);

int ans;
ans=minimumplatform(start,dept,n);
cout<<ans;



}
