// #include<iostream>
// using namespace std;
// bool AllPositiveElement(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]<=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
 
//     if (AllPositiveElement(arr, size)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool AllPosititveElement(int arr[],int size){
//     bool Allpositive=true;
//     for(int i=0;i<size;i++){
//         if(arr[i]<=0){
//             Allpositive=false;
//             break;
//         }
//     }
//     return Allpositive;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     if (AllPosititveElement(arr, size)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

bool AllPosititveElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (!(arr[i] > 0)) { 
            return false;
        }
    }
    return true;            
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (AllPosititveElement(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}