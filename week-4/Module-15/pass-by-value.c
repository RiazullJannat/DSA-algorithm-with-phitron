#include <stdio.h>
// the function receive the value send form main function and store it in a new variable with new location. 
void func(int x)
{
    // trying to change the value of x. but it only change the func functions x value not main functions x value. because both variable are in different location.
    x = 20;
    printf("printing func's x value: %d\n", x);
}
int main()
{
    // declare x var;
    int x = 10;
    // passing the value of x not the variable.
    func(x);
    printf("printing main's x value: %d\n", x);
    return 0;
}