// #include <iostream>
// using namespace std;

// bool CheckAlphabet(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] == 'a') {
//             return true; 
//         }
//     }
//     return false; 
// }

// int main() {
//     string str = "codinggita";
//     if (CheckAlphabet(str)) {
//         cout << "True" << endl; 
//     } else {
//         cout << "False" << endl; 
//     }
//     return 0;
// }


// 2nd Approach

#include<iostream>
using namespace std;
bool checkAlphabet(string str,char ch){
    if(str.length()==0){
        return false;
    }
    if(str[str.length()-1]==ch){
        return true;
    }
    return false;
}
int main(){
    string str="codinggita";
    char ch='a';
    if(checkAlphabet(str,ch)){
            cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}