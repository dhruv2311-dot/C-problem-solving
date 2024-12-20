#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);

    for (int num : arr) {
        cout << num << "  ";
    }
    return 0;
}

// void sortArray(int arr[],int size){
//     sort(arr,arr+size);
// }
// int main(){
//     int arr[]={4, 2, 8, 5, 1 };
//     int size=sizeof(arr)/sizeof(arr[0]);
//     sortArray(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
//     return 0;
// }