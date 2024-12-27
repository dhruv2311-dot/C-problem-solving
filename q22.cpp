// #include<iostream>
// using namespace std;
// int findLength(string str){
//     return str.length();
// }
// int main(){
//     string str="dhruv";
//     cout<<"length:"<<findLength(str)<<endl;
//     return 0;
    
// }

// 2nd Approach

// #include<iostream>
// using namespace std;
// int findLength(string str){
//     int count=0;
//     while(str[count]!='\0'){
//         count++;
//     }
//     return count;
// }
// int main(){
//  string str="dhruv";
//  cout<<findLength(str);
// }

// 3rd Approach


// #include<iostream>
// #include<iterator>
// using namespace std;
// int findLength(string str){
//     return distance(str.begin(),str.end());
// }
// int main(){
// string str="dhruv";
// cout<<findLength(str);
// }