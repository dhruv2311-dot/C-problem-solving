// #include<iostream>
// using namespace std;


// int findDifference(int arr[], int size) {
//     int maxElement = arr[0];
//     int minElement = arr[0];

 
//     for(int i = 0; i < size; i++) {
//         if(arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     for(int i = 0; i < size; i++) {
//         if(arr[i] < minElement) {
//             minElement = arr[i];
//         }
//     }

    
//     return maxElement - minElement;
// }

// int main() {
//     int arr[] = {80, 30, 70, 50, 20};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Difference: " << findDifference(arr, size) << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm> 
// using namespace std;

// int findDifference(int arr[], int size) {
//     int maxElement = *max_element(arr, arr + size); 
//     int minElement = *min_element(arr, arr + size);

//     return maxElement - minElement;
// }

// int main() {
//     int arr[] = {80, 30, 70, 50, 20};
//     int size = sizeof(arr) / sizeof(arr[0]); 

//     cout << "Difference: " << findDifference(arr, size) << endl;
//     return 0;
// }


