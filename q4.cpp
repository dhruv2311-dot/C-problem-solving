#include<iostream>
#include<string>
using namespace std;
void checkVowelOrConstant(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch=='o' || ch=='u'){
        cout<<"vowel";
    }else{
        cout<<"constanst";
    }
}
int main(){
    char ch='a';
    checkVowelOrConstant(ch);
}