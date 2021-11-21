#include <iostream>
using namespace std;

int main(){
    //Note that this won't create a new line.
    cout << "Hello World!";
    cout << "I am learning C++";
    //A newline element is needed.
    cout << "Hello World! \n";
    cout << "I am learning C++\n";
    cout << "Hello World! \n \n";
    cout << "I am learning C++\n";
    //Or
    cout << "Hello World!" << endl;
    cout << "I am Learning C++";
    //However, \n is the preferred way.
    return 0;
}