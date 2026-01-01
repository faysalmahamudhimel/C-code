#include <stdio.h>

int main()
{
    char str[50], ch;
    int i = 0, vowel = 0, consonant = 0, digit = 0, word = 0, other = 0;
    int inWord = 0;   // word tracking flag

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while ((ch = str[i]) != '\0')
    {
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowel++;
            inWord = 1;
        }
        else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonant++;
            inWord = 1;
        }
        else if (ch>='0' && ch<='9')
        {
            digit++;
            inWord = 1;
        }
        else if (ch == ' ' || ch == '\n')
        {
            if (inWord)
            {
                word++;
                inWord = 0;
            }
        }
        else
        {
            other++;
        }

        i++;
    }

    if (inWord) word++;   // last word

    printf("Vowel: %d\n", vowel);
    printf("Consonant: %d\n", consonant);
    printf("Digit: %d\n", digit);
    printf("Word: %d\n", word);
    printf("Other character: %d\n", other);

    return 0;
}
