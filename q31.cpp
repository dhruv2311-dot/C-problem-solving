#include<iostream>
using namespace std;
string RepeatStr(string str,int n){
    string result="";
for(int i=0;i<n;i++){
    result+=str;
}
return result;
}
int main(){
    string str="hello";
    int n=3;
    cout<<RepeatStr(str,n);
}

// 2nd Approach

