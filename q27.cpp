// #include <iostream>
// #include <string>
// using namespace std;


// string getFileExtensionBruteForce(string filename) {
    
//     int pos = filename.rfind('.');
// cout<<"pos"<<pos<<endl;
// return filename.substr(pos+1);  
// }

// int main() {
//     string filename = "gita."; 


//     cout << getFileExtensionBruteForce(filename) << endl;

//     return 0;
// }


// 2nd Approach

#include<iostream>
#include<string>
using namespace std;
string GetExention(string filename){
    int pos=filename.find_last_of('.');
    cout<<"pos"<<pos<<endl;
    return filename.substr(pos+1);
}
int main(){
    string filename="coding.gita.students";
    cout<<GetExention(filename);
    return 0;
}