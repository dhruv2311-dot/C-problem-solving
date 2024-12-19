#include<iostream>
using namespace std;
void checkSign(int number){
    if(number>0){
        cout<<"positive";
    }else if(number<0){
        cout<<"negative";
    }else{
        cout<<"Zero";
    }

}
int main(){
    int number=12;
    checkSign(number);
}