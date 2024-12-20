#include<iostream>
#include<vector>
using namespace std;
void AddElement(vector<int>&nums,int newElement){
    nums.insert(nums.begin(),newElement);
    cout<<"array:";
    for(int num:nums){
        cout<< num <<"";

    }cout<<endl;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int newElement=0;
    AddElement(nums,newElement);
}