#include<iostream>
using namespace std;
int findBig(int num1,int num2){
    if(num1>num2){
        cout<<num1<<"is big"<<endl;
    }else{
        cout<<num2<<"is big"<<endl;
    }
    return 0;
}
int main(){
    int num1=10;
    int num2=20;
    findBig(num1,num2);   
}

// 2nd Approach

// #include<iostream>
// using namespace std;
// int findMax(int num1,int num2){
//     cout<<"largest is:"<<(num1>num2 ? num1 : num2)<<endl;
// }
// int main(){
//     int num1=10;
//     int num2=20;
//     findMax(num1,num2);
// }

// 3rd Approach

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int findMax(int num1,int num2){
//     cout<<"largest is:"<<max(num1,num2)<<endl;

// }
// int main(){
//     int num1=10;
//     int num2=20;
//     findMax(num1,num2);
// }