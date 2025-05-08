#include <stdio.h>
#include <string.h>
int is_palindrome(char string[])
{
    int isPalindrome = 1;
    int len = strlen(string);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (string[i] != string[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}
int main()
{
    char string[1000];
    scanf("%s", &string);
    if (is_palindrome(string) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}