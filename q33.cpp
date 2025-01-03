// #include<iostream>
// using namespace std;
// int CheckYear(int year){
//     if(year%100==0){
//         cout<<year<<" century year"<<endl;
//     }else{
//         cout<<year<<" not century year"<<endl;
//     }
// }
// int main(){
//     int year=2024;
//     CheckYear(year);
// }

// 2nd Approach


// #include<iostream>
// using namespace std;
// int CheckYear(int year){
//     (year%100==0)? cout<<year<<" century year"<<endl : cout<<year<<" not centuary year"<<endl;
// }
// int main(){
//     int year=2024;
//     CheckYear(year);
// }

// 3rd Approach


#include<iostream>
using namespace std;
int CheckYear(int year){
    switch(year%100==0){
        case true:
        cout<<"century year"<<endl;
        break;
        case false:
        cout<<"not century year"<<endl;
        break;
    }
}
int main(){
    int year=2024;
    CheckYear(year);
}