#include<iostream>
using namespace std;
void SumEvenOrOdd(int n){
    int evensum=0;
    int oddsum=0;
    while(n>0){
        int digit=n%10;
        if(digit%2==0){
            evensum+=digit;
        }else{
            oddsum+=digit;
        }   
        n/=10;
    }
    cout << "Sum of even digits: " << evensum << endl;
    cout << "Sum of odd digits: " << oddsum << endl;
}
int main(){
    int n=123456;
    SumEvenOrOdd(n);    
}