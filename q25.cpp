#include <iostream>
#include <string>
using namespace std;

void splitString(string inputString) {
    string word = "";
    cout << "Output: ";
    for (char ch : inputString) {
        if (ch == ' ' || ch == ',' || ch == '!' || ch == '.') { 
            if (!word.empty()) {
                cout << "'" << word << "', ";
                word = ""; 
            }
        } else {
            word += ch; 
        }
    }
     if (!word.empty()) {
        cout << "'" << word << "'";
    }
    cout << endl;
}
int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    splitString(inputString);
    return 0;
}
