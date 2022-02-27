#include<iostream>
#include<algorithm>
using namespace std;



// bool checkp(char a[] ,int n){
// int s=0;
// int e=n-1;
// while(s<=e){
// 	if(a[s]!=a[e]{
// 		return 0;
// 	}
// 	else{

// 		s++;
// 		e--;

// 	}

// }
// return 1;


// }

// string ispalindrome(string s){

// string p;
// p=s;
// reverse(s.begin(),s.end());
// if(s==p){
// 	return "yes";
// }
// else{
// 	return "no";
// }



// char toLowerCase(char ch){
// 	if(ch>='a' && ch<='z')
// 		return ch;
// 	else{
// 		char temp=ch-'A'+'a';
// 		return temp;
// 	}
// }

// void reverse(char name[],int n){

// int s=0;
// int e =n-1;

// while(s<e){

// 	swap(name[s++],name[e--]);

// }


// }

// int getlength(char name[]){


// int cnt=0;
// for(int i=0;name[i]!='\0';i++){
// 	cnt++;
// }




// return cnt;



// }


//getMaxOccCharacter


// char getMaxOccCharacter(string s){


// 	int arr[26]={0};
// 	for(int i=0;is.length();i++){
// 		char ch=s[i];
// 		int number=0;
// 		if(ch>='a' and ch<='z'){
// 			number=ch-'a';


// 		}

// 		else{
// 			number=ch-'A';
// 		}

// 		arr[number]++;
// 	}


// 	int maxi=-1,ans=0;
// 	for(int i=0;i<26;i++){
// 		if(maxi<arr[i]){
// 			ans=i;
// 			maxi=arr[i];
// 		}
// 	}
// char finalAns='a'+ans;
// return finalAns;

// }





// string replacestring(string &str){

// string temp=" ";
// for(int i=0;i<str.length();i++){
// 	if(str[i]== ' '){
 
//        temp.push_back('@');
//        temp.push_back('4');
//        temp.push_back('0');

// 	}

// 	else{

// 		temp.push_back(str[i]);

// 	}
// }
// return temp;

// }





// string removeOcurrances(string s,string part){

// 	  while(s.length()!=0 and s.find(part)<s.length()){


//          s.erase(s.find(part),part.length);


//         }



//         return s;

// }


// bool checkequal(int a[26],int b[26])
// {
// 	for(int i=0;i<=26;i++){
// 		if(a[i]!=b[i])
// 			return 0;
// 	}


// 	return 1;
// }


// bool checkinclusion(string s1,string s2)
// {


// 	int count[26]={0};
// 	for(int i=0;i<s1.length();i++){
// 		int index=s[i]-'a';
// 		count1[index]++;
// 	}



// int i=0;
// int windowSize=s1.length();

// int count2[26]={0};
// while(i<windowSize){
// 	int index=s2[i]-'a';
// 	count2[index]++;
// 	i++;
// }


// if(checkequal(count1,count2))
// return 1;


// while(i<s2.length()){
// 	char newchar=s2[i];
// 	int index=newchar-'a';
// 	count2[index]++;
// 	char oldchar =s2[i-windowsize];
// 	index=oldchar-'a';
// 	count2[index]--;
// 	i++;

// 	if(checkequal(count1,count2))
// 		return 1;

// }


// return 0;




















// }





//remove duplicates


// string removeduplicates(string s){

//   string res;
        
//         for(char ch : s)
//         {
//             if(!res.empty() && res[res.size() - 1] == ch) res.pop_back();
//             else res += ch;
//         }
        
//         return res;





// }











//string compression



// int compress(vector<char>& chars) {
//         int i=0;
//         int ansindex=0;
//         int n=chars.size();
        
//         while(i<n){
            
//             int j=i+1;
//             while(j<n and chars[i]==chars[j])
//             {
//                 j++;
                
//             }
            
//             chars[ansindex++]=chars[i];
//             int count=j-i;
//             if(count>1){

//             string cnt=to_string(count);



//             for( char ch:cnt){
//                 chars[ansindex++]=ch;
                
//             }
            
            
//             }
            
            
//             i=j;
            
            
            
            
            
//         }
        
        
//         return ansindex;
        
//     }


//to find the substring in the substring

// int Substr(string s1,string s2){

// int counter=0;
// int i=0;

// for(;i<s1.length();i++){

// 	if(counter==s2.length())
// 		break;

// 	if(s2[counter]==s1[i]){
// 		counter++;
// 	}

// 	else{

//           if(counter>0){
//           	i-=counter;
//           }

//           counter=0;


// 	}
// }

// return counter <s2.length()?-1:i-counter;

// }





//string encode

string encode(string src){
        
     string str=" ";
     str=str+src[0];
     int count=1;

     for(int i=0;i<src.length();i++){

       if(src[i]==src[i-1]){
       	count=count+1;
       }

       else{

       	str=str+to_string(count);
       	str=str+src[i];
       	count=1;

       }

     }

   
return str+to_string(count);


}



int main(){



























}