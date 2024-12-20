#include <iostream> 

using namespace std; 
void addElementToEnd(int arr[], int& size, int newElement) {
    
    arr[size] = newElement;  
    
    size++; 

    
    cout << "Updated array: ";  
    for (int i = 0; i < size; i++) {  
        cout << arr[i] << " ";  
    }
    cout << endl;  
}

int main() {
   
    int arr[6] = {1, 2, 3, 4, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int newElement=6;
addElementToEnd(arr,size,newElement);  
}



// #include<iostream>
// #include<deque>
// using namespace std;
// void AddElement(deque<int>&nums,int newElement){
//     nums.push_back(newElement);
//     cout<<"updated array:";
//     for(int num:nums){
//         cout<<num<<"";
//     }
//     cout<<endl;
// }
// int main(){
//     deque<int>nums={1,2,3,4};
//     int newElement=5;
//     AddElement(nums,newElement);
// }