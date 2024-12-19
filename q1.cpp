#include<iostream>
using namespace std;
void checkGrade(int mark){
    if(mark>=90 && mark<=100){
        cout<<"grade A";
    }else  if(mark>=80 && mark<89){
        cout<<"grade B";
    }else  if(mark>=70 && mark<=79){
        cout<<"grade C";
    }else  if(mark>=60 && mark<=69){
        cout<<"grade D";
    }else  if(mark>=0 && mark<60){
        cout<<"grade F";
    }else{
        cout<<"invalid marks";
    }
}
int main(){
    int mark=79;
    checkGrade(mark);

}