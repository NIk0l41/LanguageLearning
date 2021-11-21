#include <iostream>
using namespace std;

int main(){
    int age = 19;
    double weight;
    weight = 70.1;
    char initial;
    string name = "NIk0l41";
    initial = name[0]; //This can also be used for assignment of the string.
    bool isAlive = true;

    //Constants
    const float PI = 3.14;
    
    cout << "Is user with initial '" << initial << "' alive? Well: " << isAlive << "\n \n";
    int x = 5, y = 6, z = 50;
    cout << x + y + z << "\n";

    //Double vs Float:
    // 
    // A Float can hold a number with 7 decimal digits.
    // A Double can hold a number with 15 decimal digits.
    // 
    // Essentially, a double can hold DOUBLE the amount of
    // decimal places a float can.
    // 
    // Spicy.
    // Due to this accuracy, doubles are more suited towards
    // Calculations.


    // 'E' or 'e' can also be used to denote the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1 << "\n";
}