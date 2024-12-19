#include<iostream>
using namespace std;
void countEvenOdd(int arr[],int length){
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<length;i++){
        if(arr[i%2==0]){
             evencount++;
        }else{
            oddcount++;
        }
    }
    cout<<"even"<<evencount<<endl;
    cout<<"odd"<<oddcount<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
   countEvenOdd(arr,length);
}