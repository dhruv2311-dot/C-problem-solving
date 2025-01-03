#include<iostream>
using namespace std;
void FindPairs(int nums[],int n,int target){
    bool founpair=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[j]==target-nums[i]){
                cout<<"["<<i<<","<<j<<"]";
                founpair=true;
            }
        }
    }
    if (!founpair) {
        cout << "No pairs found!" << endl;
    }

}
int main(){
    int nums[]={2,7,11,15};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=22;
    FindPairs(nums,n,target);
}