#include <iostream>  
#include <string>    
using namespace std; 

void checkLogin(string username, string password) {
    string correctUsername = "admin";
    string correctPassword = "1234";
    
   
    if (username == correctUsername && password == correctPassword) {
        cout << "Login successful" << endl; 
    } else {
        cout << "Login failed" << endl;  
    }
}

int main() {
    string username, password;
    

    cout << "Enter username: ";
    cin >> username;  
    
    cout << "Enter password: ";
    cin >> password; 
    

    checkLogin(username, password);  
    
    return 0;  
    }
