#include<iostream>
using namespace std;
void isEligible(int age){
    if(age>=18){
        cout<<"eligible for vote";
    }else{
        cout<<"not eligible for vote";
    }
}
int main(){
    int age=18;
    isEligible(age);
}