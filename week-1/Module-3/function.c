#include <stdio.h>
void hello();
void salam();
int main()
{
    char country;
    scanf("%c", &country);
    if (country == "bangladesh")
    {
        salam();
    }
    else
    {
        hello();
    }
}
void hello()
{
    printf("Hello.");
}
void salam()
{
    printf("As-salamu alikum");
}