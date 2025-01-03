#include<iostream>
using namespace std;
int categoriesAge(int age){
    if(age<=12){
        cout<<"child"<<endl;
    }else if(age>=13 && age<=18){
        cout<<"Teenager"<<endl;
    }else if(age>=19 && age<=59){
        cout<<"Adult"<<endl;
    }else if(age>=60){
        cout<<"senior"<<endl;
    }else{
        cout<<"invalid age"<<endl;
    }
}
int main(){
    int age=18;
    categoriesAge(age);
}