// #include<iostream>
// using namespace std;
// void printevenIndex(int arr[],int size){
//     cout<<"[";
//     for(int i=0;i<size;i++){
//         if(i%2==0){
//             cout<<arr[i];
//             if (i < size - 2) {    
//                 cout << ", ";
//             }
//         }
//     }
//     cout<<"]"<<endl;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     printevenIndex(arr,size);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void printevenIndex(int arr[],int size){
//     cout<<"[";
//     for(int i=0;i<size;i+=2){
//         cout<<arr[i];
//         if(i<size-2){
//             cout<<",";
//         }
//     }
//     cout<<"]"<<endl;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     printevenIndex(arr,size);
// }


#include<iostream>
using namespace std;
void printevenIndex(int arr[],int size,int index=0){
if(index>=size){
    return;

}
cout<<arr[index];
if(index+2<size){
    cout<<",";
}
printevenIndex(arr,size,index+2);
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"[";
    printevenIndex(arr,size);
    cout<<"]";
}