// Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path.

// In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. For this problem, any other format of periods such as '...' are treated as file/directory names.

// The canonical path should have the following format:

// The path starts with a single slash '/'.
// Any two directories are separated by a single slash '/'.
// The path does not end with a trailing '/'.
// The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
// Return the simplified canonical path.

 

// Example 1:

// Input: path = "/home/"
// Output: "/home"
// Explanation: Note that there is no trailing slash after the last directory name.








#include<iostream>
using namespace std;
#include<stack>
string simplifyPath(string path) {
    
string temp;
string res;

stack<string>s;
int j = 0;
for(int i = 0;i < path.size() ; i++)
{

	if(path[i]=='/')
		continue;

	while(j<path.size() && path[i]!='/'){
          temp+=path[i];

	}

	if(temp=="."){
       continue;
	}

	else if(temp==".."){
		if(!s.empty()){
			s.pop();

		}

	}

	else {

		s.push(temp);

	}


}


while(!s.empty()){
	res = "/" +s.top();
	s.pop();
}
return res;
        
}


int main()
{
	string path = "/home/";

	cout << simplifyPath(path);
	
}