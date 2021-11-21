#include <iostream>

using namespace std;

int main(){
    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
    while (day < 5) {
        cout << "Another day passes...\n";
        day++;
    }
    cout << "Ah ha! The weekend is coming up!";

    //Oh shit.
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    //This is the for loop.
    //Oh double shit.
    int j = 0;
    do {
        cout << j << "\n";
        j++;
    }
    while (i < 5);
    //This is another for loop!
    //TRIPLE SHIT
    for (int k = 0; k < 5; k++){
        cout << k << "\n";
    }
    //THIS IS *THE* FOR LOOP.
    //How did this get here?!

    /// 'break' and 'continue' still exists as they do.
    //Ternary Operators are the same as in C#
    // var = (condition) ? expressionTrue : expressionFalse;
    return 0;
}