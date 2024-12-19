// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;


double checkAvg(int arr[],int length){
    int sum =0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    double avg = static_cast<double>(sum)/length;
    return avg;
}
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    double avg= checkAvg(arr,length);
   cout<<avg;
}