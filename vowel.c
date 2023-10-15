#include <stdio.h>
int main()
{
    char ch;
    printf("enter a letter");
    scanf("%c",&ch);
    if (ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("the letter is a vowel");
    }
    else if(ch == 'A' || ch == 'I' || ch == 'E' ||  ch == 'U' ||  ch == 'O')
        printf("the letter is a vowel");
    
    else
        printf("the letter is consonant");
        
    return 0;
}

