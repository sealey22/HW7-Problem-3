/*5. (Desk  check)  Determine  the  values  displayed  by  each  cout  statement
 * in  the  following   program: */

#include <iostream>

using namespace std;

int firstnum = 10; // declare and initialize a global variable

void display(); // function prototype

int main() {

  int firstnum = 20; // declare and initialize a local variable

  cout << "\nThe value of firstnum is " << firstnum << endl;

  // user defined function, using global variable as firstnum.
  display();

  return 0;
}

void display(void) {
  cout << "The value of firstnum is now " << firstnum << endl;

  return;
}
/*
it will first spit out "the value of the firstnum is 20" because that is the
only input that is called in the main fucntino before the user function,
diplay(void).This will spit out the value of firstnum is now 10. This is because
this function is called in after the int firstnum = 20. the values or expression
in the main function are called upon firts and therefore shown first. The user
function is then called into the main function taking place after the firstnum
= 20. The global varialble is defined before the main funtion and can be used
anywhere in the program, but since there is a local variable in the main
function being using for the "the value of the firstnum is " output.
*/