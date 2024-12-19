#include<iostream>
using namespace std;
void checkTriangle(int side1,int side2,int side3){
    if(side1==side2 && side2==side3){
        cout<<"equilateral";
    }else if(side1==side2 || side2==side3 || side1==side3){
        cout<<"isosceles";
    }else{
        cout<<"scalene";
    }
}
int main(){
    int side1=3;
    int side2=3;
    int side3=3;
    checkTriangle(side1,side2,side3);
}