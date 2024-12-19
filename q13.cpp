#include <iostream>
using namespace std;


bool checkNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

  
    if (checkNumber(arr, size, target)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

