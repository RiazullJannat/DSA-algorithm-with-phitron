#include <stdio.h>
// receive the address of the variable 
void func(int *pointer)
{
    // change the value of the address. don't matter it is a main functions variable.
    // this is called pass by reference.
    *pointer = 20;
}
int main()
{
    
    int x = 10;
    // pass the address of the variable to the function.
    func(&x);
    printf("%d", x);
    return 0;
}