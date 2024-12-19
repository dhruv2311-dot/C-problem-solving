#include <iostream>  
#include <string>  

using namespace std;  

void trafficLightAction(string lightColor) {

    if (lightColor == "red") {
        cout << "Stop" << endl;  
    } else if (lightColor == "yellow") {
        cout << "Slow down" << endl; 
    } else if (lightColor == "green") {
        cout << "Go" << endl;  
    } else {
        cout << "Invalid input" << endl;  
    }
}

int main() {
    string lightColor;
    
    
    cout << "Enter the traffic light color (red, yellow, green): ";
    cin >> lightColor; 
    
    
    trafficLightAction(lightColor);  
    
    return 0;  
}