// #include<iostream>
// using namespace std;
// void checkPositiveOrNegative(int arr[],int size){
//     int positive=0;
//     int negative=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>0){
//             positive++;
//         }else if(arr[i]<0){
//             negative++;
//         }
//     }
//     cout<<positive<<endl;
//     cout<<negative<<endl;
// }
// int main(){
//     int arr[]={1,2,-4,-6,3,-9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     checkPositiveOrNegative(arr,size);
//     return 0;

// }



// #include<iostream>
// using namespace std;
// void checkPositiveOrNegative(int arr[],int size){
//     int positive=0;
//     int negative=0;
//     for(int i=0;i<size;i++){
//         (arr[i]>0) ? positive++  : negative++;
//     }
//     cout<<positive<<endl;
//     cout<<negative<<endl;
// }
// int main(){
//     int arr[]={1,2,-4,-6,3,-9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     checkPositiveOrNegative(arr,size);
//     return 0;
// }




#include <iostream>
using namespace std;

void checkPositiveOrNegative(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0;

 
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
    }

  
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    checkPositiveOrNegative(arr, size);

    return 0;
}