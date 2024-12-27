#include<iostream>
using namespace std;
void ConcetenateArr(int nums[],int n,int result[]){
for(int i=0;i<n;i++){
    result[i]=nums[i];

}
for(int i=0;i<n;i++){
    result[i+n]=nums[i];
}

}
int main(){
    int nums[]={1,2,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int result[2*n];
    ConcetenateArr(nums,n,result);
    for(int i=0;i<2*n;i++){
        cout<<result[i]<<"";
    }
}