// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int size){
//     for(int i=0;i<size;i++){
// if(arr[i]<arr[i+1]){
//     return true;
// }
//     }
//     return false;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int result=isSorted(arr,size);
//     if(result){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     bool result=isSorted(arr,size);
//     if(result){
//         cout<<"true"<<endl;

//     }else{
//         cout<<"false"<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
bool isSortedConcise(int arr[],int size){
    return std::is_sorted(arr,arr+size);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool result = isSortedConcise(arr, size);
    if (result) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl; 
    }

    return 0;
}