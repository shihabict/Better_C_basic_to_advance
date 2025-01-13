#include <iostream>

int main(){
    const double PI = 3.1419; // const variables are read only variables, it can't be changed
    
    double radius = 10;
    double circumference = 2*PI*radius;

    std:: cout << "Circumferece :" << circumference << "\n";

    return 0;
}