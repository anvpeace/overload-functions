#include <iostream>

using namespace std;

// // Initialize three variables with different types (int, double, string).


void variableType(int);
void variableType(double);
void variableType(string);




int main(){
   int var1 = 1;
   double var2 = 1.234;
   string var3 = "Peace, Love, & Happiness";




    variableType(var1);
    variableType(var2);
    variableType(var3);





    return 0;
}

void variableType(int var1){
    cout << var1 << " - This variable is an interger" << endl;

}

void variableType(double var2){
    cout << var2 << " - This variable is a double" << endl;

}

void variableType(string var3){
    cout << var3 << " - This variable is a string" << endl;

}

//  Write a function 
// "variableType" and overload it two times. Each three overloaded functions should take as
// an argument different type of variable eg. variableType(int), variableType(double),
// variableType(string). Send the variables created in the beginning to the variableType
// function with corresponding type of argument and print out in the screen information
// about what type of variable was used.

// eg.
// Output:
// 2 - this variable was an integer
// 0.123 - this variable was a double
// "What a beautiful day" - this variable was a string