// #include<iostream>
// #include<cctype>
// using namespace std;

// void UpperCase(string& str) {  
//     for(int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
// }

// int main() {
//     string str = "dhruv";
//     UpperCase(str);  
//     cout << str;  
// }


// 2nd Approach


#include<iostream>
using namespace std;
string toAsciiValue(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]>= 'a' && str[i]<='z'){
 str[i]=str[i]-32;
        }
       
    }
    return str;
}
int main(){
    string str="dhruv";
    cout<<toAsciiValue(str);
}